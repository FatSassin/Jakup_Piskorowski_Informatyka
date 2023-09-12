namespace std
{
    template < class CharT, class Traits = std::char_traits < CharT > >
    class basic_ostream
        : virtual public std::basic_ios < CharT, Traits >
    {
    public:
        basic_ostream& write(const char_type* s, std::streamsize count);
    };
}