__int64 __fastcall sub_E890(__int64 a1, char *a2, int *a3, __int64 a4, int a5, int a6)
{
  char v6; // al
  int v8; // r13d
  int v9; // eax
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  char *v14[45]; // [rsp-170h] [rbp-1B8h] BYREF
  char *v15[9]; // [rsp+0h] [rbp-48h] BYREF

  v6 = *(_BYTE *)(a4 + 1);
  v15[1] = (char *)__readfsqword(0x28u);
  if ( v6 == 4 )
  {
    *(_QWORD *)a2 = 0;
    *a3 = *(unsigned __int16 *)(a4 + 6);
    return 1;
  }
  if ( v6 == 3 )
  {
    v8 = *(unsigned __int16 *)(a4 + 6);
    v9 = *(char *)(a4 + 32);
    *a3 = v9;
    if ( v8 != v9 )
    {
      v15[0] = (char *)-1LL;
      if ( !v9 )
      {
        *a3 = v8;
LABEL_6:
        *(_QWORD *)a2 = 0;
        return 1;
      }
      if ( !v8 )
        goto LABEL_6;
      qmemcpy(v14, (const void *)(a1 + 16), sizeof(v14));
      if ( (unsigned __int8)sub_E410(
                              *(_QWORD *)(a1 + 888),
                              a2,
                              v15,
                              v8,
                              a5,
                              a6,
                              (char)v14[0],
                              (int)v14[1],
                              v14[2],
                              (unsigned __int16)v14[3],
                              (int)v14[4],
                              (__int64)v14[5],
                              (__int64)v14[6],
                              (int)v14[7],
                              (int)v14[8],
                              (int)v14[9],
                              (__int64)v14[10],
                              (__int64)v14[11],
                              v14[12],
                              (int)v14[13],
                              (int)v14[14],
                              (__int64)v14[15]) )
        return 1;
      v13 = *(_QWORD *)(a1 + 888);
      qmemcpy(v14, (const void *)(a1 + 16), sizeof(v14));
      if ( (unsigned __int8)sub_E410(
                              v13,
                              a2,
                              v15,
                              *a3,
                              v11,
                              v12,
                              (char)v14[0],
                              (int)v14[1],
                              v14[2],
                              (unsigned __int16)v14[3],
                              (int)v14[4],
                              (__int64)v14[5],
                              (__int64)v14[6],
                              (int)v14[7],
                              (int)v14[8],
                              (int)v14[9],
                              (__int64)v14[10],
                              (__int64)v14[11],
                              v14[12],
                              (int)v14[13],
                              (int)v14[14],
                              (__int64)v14[15]) )
      {
        *a3 = v8;
        return 1;
      }
    }
  }
  return 0;
}

