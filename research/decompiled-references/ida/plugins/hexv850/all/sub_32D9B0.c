__int64 __fastcall sub_32D9B0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 *v5; // r12
  __int64 v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 i; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rbp
  _QWORD *v12; // rbx
  __int64 v14; // [rsp+0h] [rbp-68h] BYREF
  __int128 v15; // [rsp+8h] [rbp-60h]
  __int128 v16; // [rsp+18h] [rbp-50h]
  __int64 v17; // [rsp+28h] [rbp-40h]
  int v18; // [rsp+30h] [rbp-38h]
  unsigned __int64 v19; // [rsp+38h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v14 = 0;
  v5 = &v14;
  v17 = 0;
  v18 = 1;
  v15 = 0;
  v16 = 0;
  get_tinfo_details();
  v6 = v15;
  v7 = v14;
  v8 = v14 + 144 * v15;
  if ( v8 != v14 )
  {
    for ( i = v14; v8 != i; i += 144 )
    {
      v10 = *(_QWORD *)i >> 3;
      if ( a3 < v10 )
        break;
      LOBYTE(v5) = a3 != a2 && *(_QWORD *)(i + 8) >> 3 != 0;
      if ( (_BYTE)v5 && a3 - 1 >= v10 && (*(_QWORD *)(i + 8) >> 3) + v10 - 1 >= a2 && (*(_BYTE *)(i + 133) & 0x30) != 0 )
        goto LABEL_8;
    }
  }
  LODWORD(v5) = 0;
LABEL_8:
  if ( v14 )
  {
    if ( (_QWORD)v15 )
    {
      v11 = 0;
      do
      {
        v12 = (_QWORD *)(v7 + 144 * v11);
        clear_tinfo_t();
        if ( v12[5] )
        {
          v12[6] = 0;
          qfree();
        }
        if ( v12[2] )
        {
          v12[3] = 0;
          qfree();
        }
        ++v11;
        v7 = v14;
      }
      while ( v6 != v11 );
    }
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  return (unsigned int)v5;
}

