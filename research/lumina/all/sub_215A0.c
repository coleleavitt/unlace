void __fastcall sub_215A0(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // r9
  _DWORD *v5; // rbp
  __int64 v6; // rbx
  __int64 i; // r8
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // r11
  _QWORD *v11; // rax

  v4 = a2;
  v5 = a3;
  v6 = a4;
  for ( i = 0; (int)i < *v5; i = (unsigned int)(i + 1) )
  {
    v8 = 4LL * (int)i;
    if ( v6 && *(_QWORD *)&v5[v8 + 2] && !(unsigned int)sub_CA2B0(*(_QWORD *)&v5[v8 + 2], v6, a3, a4, i, v4) )
    {
      v11 = *(_QWORD **)(v10 + 400);
      a3 = (_QWORD *)(a1 + 400);
      while ( v11 )
      {
        a4 = v11[3];
        if ( v9 == *v11 )
        {
          *a3 = a4;
          a3 = *(_QWORD **)v4;
          v11[3] = *(_QWORD *)v4;
          *(_QWORD *)v4 = v11;
          ++*(_DWORD *)(v4 + 8);
          break;
        }
        a3 = v11 + 3;
        v11 = (_QWORD *)v11[3];
      }
    }
  }
}
