__int64 __fastcall sub_8EE0(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 *a4, __int16 a5)
{
  __int64 eah; // rax
  __int64 v10; // rcx
  unsigned int v11; // esi
  __int64 v12; // rdi
  __int64 v13; // rdx

  eah = get_eah();
  v10 = *a4;
  v11 = 0;
  if ( *a4 != -1 )
  {
    v12 = a4[1];
    if ( v12 != -1 && (*((_BYTE *)a4 + 25) & 1) == 0 )
    {
      v13 = *(_QWORD *)(eah + 16) & (v10 + a4[2] - v12);
      if ( WORD1(v13) - (((v13 & 0x8000) == 0) - 1) == a5 )
      {
        *a1 = v10;
        v11 = 1;
        *a2 = a4[1];
      }
    }
  }
  return v11;
}

