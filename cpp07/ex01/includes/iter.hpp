#ifndef ITER_HPP
#define ITER_HPP

template<typename T, typename T2>
void    iter(T *tab, int size, T2 ptr_fnc)
{
    if (size > 0 && tab && ptr_fnc)
        for (int i = 0; i < size; ++i)
            ptr_fnc(tab[i]);
}

#endif