void __fastcall sub_64C0(__int64 a1, __int64 a2, char a3)
{
  _BYTE *v3; // rbx
  _BYTE *v4; // r12
  unsigned __int64 v5; // r14
  int v7; // ebp

  v3 = *(_BYTE **)a2;
  v4 = (_BYTE *)(*(_QWORD *)a2 + *(_QWORD *)(a2 + 8));
  if ( v4 != *(_BYTE **)a2 )
  {
    v5 = 0x8000000000002001LL;
    do
    {
      v7 = (unsigned __int8)*v3;
      if ( !(_BYTE)v7 )
        break;
      if ( (unsigned int)(char)v7 > 0x7F
        || !isalnum((char)v7)
        && ((unsigned __int8)(v7 - 32) > 0x3Fu
         || !_bittest64((const __int64 *)&v5, (unsigned int)(v7 - 32)) && ((_BYTE)v7 != 46 || a3)) )
      {
        *v3 = 95;
      }
      ++v3;
    }
    while ( v4 != v3 );
  }
}

