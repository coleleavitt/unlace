__int64 __fastcall sub_11D020(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned __int64 a4)
{
  char v6; // dl
  __int64 v7; // rax
  unsigned int v8; // r14d
  __int64 *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  int v16; // ecx
  _QWORD *v17; // rax

  v6 = sub_64880(a3);
  v7 = a3[3];
  if ( v6 )
  {
    if ( v7 )
    {
      v8 = sub_64880(a3);
      if ( (_BYTE)v8 )
      {
        if ( a3[3] == 1 )
        {
          sub_11CDA0(a1);
          v10 = (__int64 *)a3[2];
          v11 = *v10;
          v12 = *(_QWORD *)(a2[187] + 24LL);
          v13 = *(_QWORD *)(v12 + 16) & (*v10 - a2[180]);
          if ( v13 >= 0 && (v14 = v10[1], v14 < a4) && v13 < a4 - v14 )
          {
            *(_BYTE *)a1 = 5;
            v17 = (_QWORD *)j__qalloc_or_throw(16, (__int64)a2, v11, v12);
            *v17 = a2;
            v17[1] = v13;
            *(_QWORD *)(a1 + 8) = v17;
          }
          else
          {
            v15 = a2[188];
            *(_BYTE *)a1 = 6;
            v16 = 8 * *(_DWORD *)(v15 + 84);
            if ( (unsigned __int64)v16 <= 0x3F )
              v11 &= ~(-1LL << v16);
            *(_QWORD *)(a1 + 8) = v11;
          }
          *(_DWORD *)(a1 + 4) = v10[1];
          return v8;
        }
      }
    }
    return 0;
  }
  if ( v7 )
    return 0;
  return sub_11CFA0(a1, (__int64)a3);
}

