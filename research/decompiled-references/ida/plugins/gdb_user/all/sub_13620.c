__int64 __fastcall sub_13620(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  unsigned __int64 v4; // rbp
  __int64 v6; // rdi
  unsigned __int64 v7; // r13
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  bool v12; // bl
  __int64 v13; // r14
  __int64 v14; // r13
  __int64 v15; // rbx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // r15
  char v19; // [rsp+Ch] [rbp-8Ch]
  unsigned __int64 v20; // [rsp+10h] [rbp-88h]
  unsigned __int64 v21; // [rsp+28h] [rbp-70h]
  unsigned int *v22; // [rsp+38h] [rbp-60h] BYREF
  unsigned int *v23; // [rsp+40h] [rbp-58h] BYREF
  __int128 v24; // [rsp+48h] [rbp-50h]
  unsigned __int64 v25; // [rsp+58h] [rbp-40h]

  v2 = *(int *)(a1 + 1176);
  v25 = __readfsqword(0x28u);
  v3 = qword_6AC10 + 144 * v2;
  v4 = *(int *)(v3 + 128);
  if ( (((_DWORD)v4 - 4) & 0xFFFFFFFB) != 0 || *(int *)(v3 + 124) < 0 )
    return -1;
  v6 = *(_QWORD *)(a1 + 864);
  v7 = -1;
  if ( *(_DWORD *)(v6 + 80) == 1 )
  {
    v23 = nullptr;
    v24 = 0;
    if ( !(unsigned __int8)sub_3D080(v6, &v23)
      || (v22 = v23,
          v12 = *(_DWORD *)(qword_6AC10 + 144LL * *(int *)(a1 + 1176) + 124) > 0,
          v20 = ((unsigned __int64)v24 / v4) >> 1,
          sub_48620(a1, (unsigned int)"GDB: Read %zu values from auxiliary vector\n", v20, v9, v10, v11),
          !v20) )
    {
LABEL_6:
      v7 = -1;
      goto LABEL_7;
    }
    v13 = 0;
    v21 = -1;
    v14 = -1;
    v19 = v12;
    while ( 1 )
    {
      v15 = sub_12830(&v22, v4, v19);
      v18 = sub_12830(&v22, v4, v19);
      if ( v4 == 4 )
      {
        sub_48620(a1, (unsigned int)"GDB:  auxv [%08llX]: [%08llX]\n", v15, v18, v16, v17);
        if ( v15 == 6 )
          goto LABEL_18;
LABEL_13:
        if ( v15 == 3 )
          v14 = v18;
        if ( v20 == ++v13 )
        {
LABEL_19:
          if ( v14 == -1 )
            goto LABEL_6;
          v7 = v14 - a2;
          if ( !v7 || !v21 || v21 != -1 && v7 % v21 )
            goto LABEL_6;
LABEL_7:
          if ( v23 )
          {
            *(_QWORD *)&v24 = 0;
            qfree();
          }
          return v7;
        }
      }
      else
      {
        sub_48620(a1, (unsigned int)"GDB:  auxv [%016llX]: [%016llX]\n", v15, v18, v16, v17);
        if ( v15 != 6 )
          goto LABEL_13;
LABEL_18:
        v21 = v18;
        if ( v20 == ++v13 )
          goto LABEL_19;
      }
    }
  }
  return v7;
}

