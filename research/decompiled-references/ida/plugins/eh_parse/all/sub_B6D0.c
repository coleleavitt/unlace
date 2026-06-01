__int64 __fastcall sub_B6D0(__int64 a1, _QWORD *a2, __int64 a3, char a4, char a5)
{
  int dword; // eax
  unsigned int v9; // r14d
  unsigned int v10; // ebx
  __int64 v11; // rbp
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 ea_name; // rax
  char *v16; // rdx
  char v17; // al
  char *v18; // rbx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned int v22; // ebx
  unsigned int v23; // eax
  int v24; // esi
  unsigned int v26; // [rsp+8h] [rbp-60h]
  char *v27; // [rsp+8h] [rbp-60h]
  char *s1; // [rsp+10h] [rbp-58h] BYREF
  __int128 v29; // [rsp+18h] [rbp-50h]
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  dword = get_dword(a3);
  if ( dword < 0 )
  {
    v9 = HIBYTE(dword) & 0x1F;
    if ( v9 )
    {
      v26 = 2;
      v10 = (((unsigned int)dword >> 14) & 0x3FC) + 2;
    }
    else
    {
      v26 = 3;
      v10 = 3;
    }
    if ( (a5 & 1) != 0 && (unsigned __int8)sub_114F0(a2[10])
      || (unsigned __int8)sub_EFD0(*a2, a2[10], a2[11], a2[9]) != 1
      || v9 > 2 )
    {
      return v30 - __readfsqword(0x28u);
    }
    v11 = a3 + 4;
    if ( v26 >= v10 )
    {
      if ( a4 )
        a2[12] = v11;
      return v30 - __readfsqword(0x28u);
    }
    goto LABEL_9;
  }
  v13 = *a2;
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (a3 + (dword ^ 0x40000000u) - 0x40000000);
  a2[9] = v14;
  if ( (unsigned __int64)(v14 - 1) > 0xFFFFFFFFFFFFFFFDLL )
  {
    v9 = -1;
  }
  else
  {
    s1 = nullptr;
    v29 = 0;
    if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v13 + 8) + 4LL) - 12) <= 1 && !(unsigned __int8)getinf_flag(3, 4) )
      v14 = (unsigned int)v14 & 0xFFFFFFFE;
    ea_name = get_ea_name(&s1, v14, 512, 0);
    v16 = s1;
    v9 = -1;
    if ( ea_name > 0 )
    {
      v17 = *s1;
      v18 = s1;
      if ( *s1 == 46 )
      {
        v17 = s1[1];
        v18 = s1 + 1;
      }
      if ( v17 == 95 )
      {
        do
          ++v18;
        while ( *v18 == 95 );
      }
      v27 = s1;
      v19 = strcmp(v18, "aeabi_unwind_cpp_pr0");
      v16 = v27;
      v9 = v19;
      if ( v19 )
      {
        v9 = 1;
        v20 = strcmp(v18, "aeabi_unwind_cpp_pr1");
        v16 = v27;
        if ( v20 )
        {
          v21 = strcmp(v18, "aeabi_unwind_cpp_pr2");
          v16 = v27;
          v9 = v21 != 0 ? -1 : 2;
        }
      }
    }
    if ( v16 )
    {
      *(_QWORD *)&v29 = 0;
      qfree(v16);
    }
  }
  v22 = get_dword(a3 + 4);
  if ( (a5 & 1) != 0 && (unsigned __int8)sub_114F0(a2[10]) || !(unsigned __int8)sub_EFD0(*a2, a2[10], a2[11], a2[9]) )
    return v30 - __readfsqword(0x28u);
  v11 = a3 + 8;
  v23 = HIBYTE(v22);
  v10 = 4 * HIBYTE(v22) + 3;
  if ( v23 )
  {
    v26 = 3;
LABEL_9:
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (((v10 + 3 - v26) & 0xFFFFFFFC) + v11);
  }
  if ( !a4 )
    return v30 - __readfsqword(0x28u);
  a2[12] = v11;
  if ( v9 != -1 )
    return v30 - __readfsqword(0x28u);
  if ( (unsigned __int64)(a2[9] - 1LL) > 0xFFFFFFFFFFFFFFFDLL )
    return v30 - __readfsqword(0x28u);
  v24 = sub_A450(a2);
  if ( (v24 & 0xFE00) != 0 )
    return v30 - __readfsqword(0x28u);
  return sub_A890(a2, v24, -1);
}

