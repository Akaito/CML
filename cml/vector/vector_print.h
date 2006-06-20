/* -*- C++ -*- ------------------------------------------------------------
 @@COPYRIGHT@@
 *-----------------------------------------------------------------------*/
/** @file
 *  @brief
 */

#ifndef vector_print_h
#define vector_print_h

#include <iostream>

namespace cml {

/** Output a vector to a std::ostream. */
template<typename E, class AT > inline std::ostream&
operator<<(std::ostream& os, const vector<E,AT>& v)
{
    os << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        os << " " << v[i];
    }
    os << " ]";
    return os;
}

/** Output a vector expression to a std::ostream. */
template< class XprT > inline std::ostream&
operator<<(std::ostream& os, const et::VectorXpr<XprT>& v)
{
    os << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        os << " " << v[i];
    }
    os << " ]";
    return os;
}

} // namespace cml

#endif

// -------------------------------------------------------------------------
// vim:ft=cpp
