__int64 __fastcall sub_4340(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  char v9; // al
  int v10; // edx
  int v11; // eax
  __int64 v12; // r9
  int segm_qty; // r12d
  unsigned int i; // ebp
  unsigned __int64 *v15; // rbx
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  char **v19; // r14
  const char *v20; // r13
  __int64 v22; // [rsp+18h] [rbp-60h] BYREF
  __int64 v23; // [rsp+20h] [rbp-58h] BYREF
  __int128 v24; // [rsp+28h] [rbp-50h]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 200) |= 1u;
  netnode_check(&v22, "$ rust", 0, 1);
  v23 = *(unsigned int *)(a1 + 200);
  netnode_supset(v22, -1, &v23, 8, 65);
  v9 = getinf(3);
  v10 = 16;
  v11 = v9 & 6;
  if ( v11 )
  {
    v10 = 64;
    if ( v11 == 2 )
      v10 = 32;
  }
  *(_DWORD *)(a1 + 208) = v10;
  sub_34F0(a1);
  sub_2F90((__int64)"Creating Rust-specific string literals");
  segm_qty = get_segm_qty();
  if ( segm_qty > 0 )
  {
    for ( i = 0; segm_qty != i; ++i )
    {
      v15 = (unsigned __int64 *)getnseg(i);
      v24 = 0;
      v23 = 0;
      if ( get_segm_name(&v23, v15, 0) > 0 )
      {
        v19 = off_9BA0;
        v20 = "__const";
        if ( "__const" )
        {
LABEL_11:
          v16 = strlen(v20);
          if ( !v16 || (_QWORD)v24 && (__int64)v24 - 1 >= v16 && !strncmp((const char *)(v23 + v24 - 1 - v16), v20, v16) )
            goto LABEL_17;
          goto LABEL_15;
        }
        while ( 1 )
        {
LABEL_17:
          if ( !(unsigned __int8)sub_4230(a1, v15, v16, v17, v18, v12) )
            break;
LABEL_15:
          if ( ++v19 == (char **)&unk_9BB8 )
            break;
          v20 = *v19;
          if ( *v19 )
            goto LABEL_11;
        }
      }
      if ( v23 )
      {
        *(_QWORD *)&v24 = 0;
        qfree(v23);
      }
    }
  }
  return callui(24, 10, 0, &callui, callui, v12, a7, a8, a9);
}

