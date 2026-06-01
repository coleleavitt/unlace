__int64 __fastcall sub_4EE50(_QWORD *a1, __int64 a2, int a3, int a4, const char *a5, _QWORD *a6, unsigned int a7)
{
  __int64 v8; // rcx
  unsigned __int64 v10; // r8
  int v11; // ebx
  int v12; // eax
  int v13; // edx
  __int64 v14; // rdx
  __int16 v16; // r12
  const char *v17; // rdi
  const char *v18; // rdx
  _QWORD *v19; // [rsp+0h] [rbp-68h]
  const char *v20; // [rsp+10h] [rbp-58h] BYREF
  __int128 v21; // [rsp+18h] [rbp-50h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v8 = (unsigned int)(a3 - 1);
  v22 = __readfsqword(0x28u);
  v10 = a7;
  v11 = (*(_WORD *)(a1[30] + 344LL) & 4) == 0 ? 17665 : 1281;
  v12 = v11 | 4;
  if ( (unsigned __int16)(a3 - 1) > 1u )
  {
    v13 = 16;
LABEL_3:
    v14 = v12 | (unsigned int)v13;
    BYTE1(v14) |= 0x18u;
    return set_name(a2, a5, v14);
  }
  v16 = a3;
  if ( a4 < 0 )
  {
    if ( a1[34] == -1 )
    {
      v19 = a6;
      netnode_check(a1 + 34, "$ IDALDR node for ids loading $", 0, 1);
      v10 = a7;
      a6 = v19;
    }
    v20 = nullptr;
    v18 = a5;
    v21 = 0;
    if ( a6 )
    {
      if ( v10 < a6[7] )
      {
        sub_4ECA0((__int64 *)&v20, a5, a6, *(_WORD *)(a6[6] + 2 * v10));
        v18 = &s1;
        if ( (_QWORD)v21 )
          v18 = v20;
      }
    }
    set_import_name(a1[34], a2, v18, v8, v10);
    if ( v20 )
    {
      *(_QWORD *)&v21 = 0;
      qfree(v20);
    }
    goto LABEL_7;
  }
  if ( *(_DWORD *)(a1[1] + 4LL) == 13 && (!strncmp(a5, "Java_", 5u) || !strcmp(a5, "JNI_OnLoad")) )
  {
    v17 = "android_arm";
    if ( (unsigned __int8)getinf_flag(3, 4) )
      v17 = "android_arm64";
    add_til(v17, 3);
  }
  if ( !a4 )
  {
LABEL_7:
    v12 = v11 | 2;
    v13 = 8 * (v16 != 2) + 8;
    goto LABEL_3;
  }
  return add_entry(a2, a2, a5, a4 == 2, 4 * (unsigned int)(v16 == 2) + 9);
}
