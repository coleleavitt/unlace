void __fastcall sub_2150F(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // r9
  _DWORD *v5; // r12
  __int64 v6; // rbx
  __int64 i; // r8
  _DWORD *v8; // rax
  __int64 v9; // r10
  __int64 v10; // r10
  __int64 v11; // r11
  _QWORD *v12; // rax

  v4 = a2;
  v5 = a3;
  v6 = a4;
  for ( i = 0; (int)i < *v5; i = (unsigned int)(i + 1) )
  {
    v8 = &v5[6 * (int)i];
    v9 = *((_QWORD *)v8 + 2);
    LOBYTE(a3) = (*((_BYTE *)v8 + 25) & 3) == 0;
    if ( ((v9 != 0) & (unsigned __int8)a3) != 0 && v6 && !(unsigned int)sub_CA2B0(v9, v6, a3, a4, i, v4) )
    {
      v12 = *(_QWORD **)(v11 + 400);
      a3 = (_QWORD *)(a1 + 400);
      while ( v12 )
      {
        a4 = v12[3];
        if ( v10 == *v12 )
        {
          *a3 = a4;
          a3 = *(_QWORD **)v4;
          v12[3] = *(_QWORD *)v4;
          *(_QWORD *)v4 = v12;
          ++*(_DWORD *)(v4 + 8);
          break;
        }
        a3 = v12 + 3;
        v12 = (_QWORD *)v12[3];
      }
    }
  }
}
