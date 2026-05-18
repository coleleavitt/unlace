__int64 __fastcall sub_1A1830(__int64 a1, char a2)
{
  int v2; // r13d
  char v4; // r12
  const char *v5; // r14
  __int64 v6; // r15
  int v7; // eax
  int *v8; // rdx
  unsigned __int64 v9; // rax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rdi
  unsigned __int64 v16; // r12
  _BYTE *v17; // rax
  __int64 v18; // r13
  void *v19; // rdi
  unsigned __int64 v20; // rdx
  char *v21; // r12
  char *v22; // rbp
  char *v23; // rax
  int v24; // eax
  int v25; // ecx
  const char *v26; // rdx
  int v27; // [rsp+0h] [rbp-C8h]
  int *v28; // [rsp+8h] [rbp-C0h]
  void *ptr; // [rsp+10h] [rbp-B8h] BYREF
  int v30[4]; // [rsp+18h] [rbp-B0h]
  int v31[4]; // [rsp+30h] [rbp-98h] BYREF
  int v32[4]; // [rsp+40h] [rbp-88h]
  int v33[4]; // [rsp+50h] [rbp-78h]
  __int64 v34[2]; // [rsp+60h] [rbp-68h]
  int v35[4]; // [rsp+70h] [rbp-58h]
  int v36[2]; // [rsp+88h] [rbp-40h]

  *(_QWORD *)v36 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a1 + 5712);
  if ( v2 != -1 )
  {
    if ( !unk_2439A0 )
      sub_198E10(2718);
    BUG();
  }
  v4 = 2;
  *(_OWORD *)v31 = 0;
  v5 = (const char *)(a1 + 1032);
  *(_OWORD *)v32 = 0;
  *(_OWORD *)v33 = 0;
  *(_OWORD *)v34 = 0;
  *(_OWORD *)v35 = 0;
  if ( !a2 )
  {
    v2 = 0;
    v12 = sub_197B50((char *)(a1 + 1032), (__int64)v31);
    v4 = v12;
    if ( v12 )
    {
      v4 = 0;
    }
    else if ( *(_QWORD *)&v33[2] == *(_QWORD *)(a1 + 5696) && *(_QWORD *)v35 == *(_QWORD *)(a1 + 5704) )
    {
      return 1;
    }
  }
  v6 = 2066;
  v27 = time(nullptr) + 15;
  while ( 1 )
  {
    v7 = sub_197A10((__int64)v5, v4, v2);
    *(_DWORD *)(a1 + 5712) = v7;
    if ( v7 != -1 )
      break;
    v8 = __errno_location();
    v9 = (unsigned int)*v8;
    if ( (_DWORD)v9 == 2 )
    {
      v28 = v8;
      if ( !a2 )
        return 1;
      v11 = sub_197B10(v5, 0x1A4u);
      *(_DWORD *)(a1 + 5712) = v11;
      if ( v11 != -1 )
      {
        *(_BYTE *)(a1 + 5640) = 1;
        return 1;
      }
      v9 = (unsigned int)*v28;
    }
    if ( (unsigned int)v9 <= 0xB )
    {
      if ( _bittest64(&v6, v9) )
      {
        sub_198FF0(1);
        if ( time(nullptr) <= v27 )
          continue;
      }
    }
    if ( *(_DWORD *)(a1 + 5712) == -1 )
    {
      v26 = sub_2C700(-1);
      sub_2F260((__int64)"%s: %s", v5, v26);
    }
    return 1;
  }
  if ( a2 )
  {
    v24 = sub_197D40(v7, (__int64)v31);
    v14 = *(_QWORD *)v35;
    v25 = v24;
    v13 = *(_QWORD *)&v33[2];
    if ( !v25 && *(_QWORD *)(a1 + 5696) == *(_QWORD *)&v33[2] && *(_QWORD *)(a1 + 5704) == *(_QWORD *)v35 )
      return 1;
  }
  else
  {
    v13 = *(_QWORD *)&v33[2];
    v14 = *(_QWORD *)v35;
  }
  *(_QWORD *)(a1 + 5696) = v13;
  v15 = *(_QWORD **)(a1 + 5664);
  *(_QWORD *)(a1 + 5704) = v14;
  sub_19E650(v15);
  *(_QWORD *)(a1 + 5664) = 0;
  LODWORD(v15) = *(_DWORD *)(a1 + 5712);
  *(_QWORD *)(a1 + 5672) = a1 + 5656;
  *(_QWORD *)(a1 + 5680) = a1 + 5656;
  *(_QWORD *)(a1 + 5688) = 0;
  v16 = sub_197E90((int)v15);
  if ( v16 <= 7 )
  {
    sub_1979E0(*(_DWORD *)(a1 + 5712));
    *(_DWORD *)(a1 + 5712) = -1;
    goto LABEL_42;
  }
  v17 = nullptr;
  ptr = nullptr;
  *(_OWORD *)v30 = 0;
  if ( v16 != -1 )
  {
    ptr = sub_1987B0((__int64)&ptr, nullptr, v16 + 1, 1u);
    memset((char *)ptr + *(_QWORD *)v30, 0, v16 + 1 - *(_QWORD *)v30);
    *(_QWORD *)v30 = v16 + 1;
    v17 = ptr;
  }
  v17[v16] = 0;
  v18 = (int)sub_1978B0(*(_DWORD *)(a1 + 5712), ptr, v16);
  if ( !a2 )
  {
    sub_1979E0(*(_DWORD *)(a1 + 5712));
    *(_DWORD *)(a1 + 5712) = -1;
  }
  v19 = ptr;
  if ( *(_DWORD *)ptr != 929121385 || v16 != v18 )
    goto LABEL_44;
  v20 = v16 - 8;
  v21 = (char *)ptr + 4;
  v22 = (char *)ptr + v20 + 4;
  if ( (unsigned int)sub_1A2310(929121385, (char *)ptr + 4, v20) != *(_DWORD *)v22 )
  {
    v19 = ptr;
    goto LABEL_44;
  }
  v23 = sub_1A1100((_QWORD *)(a1 + 5648), v21, v22);
  v19 = ptr;
  if ( !v23 || v22 != v23 )
  {
LABEL_44:
    if ( v19 )
    {
      *(_QWORD *)v30 = 0;
      j__free(v19);
    }
LABEL_42:
    sub_2F260((__int64)"%s: corrupted registry file, please delete it", v5);
  }
  if ( ptr )
  {
    *(_QWORD *)v30 = 0;
    j__free(ptr);
  }
  return 1;
}
