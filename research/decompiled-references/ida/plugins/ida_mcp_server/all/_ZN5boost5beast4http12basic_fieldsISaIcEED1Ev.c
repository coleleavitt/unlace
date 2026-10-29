// Alternative name is '_ZN5boost5beast4http12basic_fieldsISaIcEED2Ev'
void __fastcall boost::beast::http::basic_fields<std::allocator<char>>::~basic_fields(__int64 a1)
{
  unsigned __int16 *v2; // rbp
  unsigned __int16 *v3; // rbx
  unsigned __int16 *v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rsi

  v2 = (unsigned __int16 *)(a1 + 32);
  v3 = *(unsigned __int16 **)(a1 + 32);
  if ( (unsigned __int16 *)(a1 + 32) != v3 )
  {
    do
    {
      v4 = v3;
      v3 = *(unsigned __int16 **)v3;
      operator delete(v4, (v4[24] + v4[25] + 65) & 0x3FFF8);
    }
    while ( v2 != v3 );
  }
  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 )
    operator delete(*(void **)(a1 + 48), v5);
  v6 = *(_QWORD *)(a1 + 72);
  if ( v6 )
    operator delete(*(void **)(a1 + 64), v6);
}

