__int64 __fastcall sub_11CA60(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned __int64 a4)
{
  char v6; // dl
  __int64 v7; // rax
  unsigned int v8; // r14d
  __int64 *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  int v15; // ecx
  _QWORD *v16; // rax

  v6 = sub_64280(a3);
  v7 = a3[3];
  if ( v6 )
  {
    if ( v7 )
    {
      v8 = sub_64280(a3);
      if ( (_BYTE)v8 )
      {
        if ( a3[3] == 1 )
        {
          sub_11C7E0(a1);
          v10 = (__int64 *)a3[2];
          v11 = *v10;
          v12 = *(_QWORD *)(*(_QWORD *)(a2[187] + 24LL) + 16LL) & (*v10 - a2[180]);
          if ( v12 >= 0 && (v13 = v10[1], v13 < a4) && v12 < a4 - v13 )
          {
            *(_BYTE *)a1 = 5;
            v16 = (_QWORD *)j__qalloc_or_throw();
            *v16 = a2;
            v16[1] = v12;
            *(_QWORD *)(a1 + 8) = v16;
          }
          else
          {
            v14 = a2[188];
            *(_BYTE *)a1 = 6;
            v15 = 8 * *(_DWORD *)(v14 + 84);
            if ( (unsigned __int64)v15 <= 0x3F )
              v11 &= ~(-1LL << v15);
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
  return sub_11C9E0(a1, (__int64)a3);
}

