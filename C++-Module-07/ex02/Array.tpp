template <typename T>
Array <T>::Array() : array(NULL), len(0){}

template <typename T>
Array <T>::Array( unsigned int len) : array(new T[len]), len(len){}

template <typename T>
Array <T>::Array(Array const &other) : array(new T[other.len]), len(other.len)
{
    for (size_t i = 0; i < len; i++)
        array[i] = other.array[i];
}

template <typename T>
Array <T> &Array <T>::operator=(Array const &other)
{
    if (this != &other)
    {
        delete [] array;
        array = new T[other.len];
        len = other.len;
        for (size_t i = 0; i < len; i++)
            array[i] = other.array[i];
    }
    return (*this);
}

template <typename T>
T &Array <T>::operator[]( unsigned int index)
{
    if (index >= len)
        throw OutOfRange();
    return (array[index]);
}

template <typename T>
Array <T>::~Array()
{
    delete [] array;
}

template <typename T>
const char *Array <T>::OutOfRange::what() const throw()
{
    return ("Index out of range");
}

template <typename T>
unsigned int Array <T>::size() const
{
    return (len);
}

