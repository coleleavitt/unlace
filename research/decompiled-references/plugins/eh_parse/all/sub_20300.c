unsigned __int64 __fastcall sub_20300(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, char a5, char a6)
{
  __int64 *func; // rbx
  __int64 v9; // rax
  __int64 v10; // r12
  unsigned __int64 that; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  int v14; // r13d
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rcx
  int dword; // ebx
  __int64 v19; // rbp
  unsigned __int64 v20; // r12
  __int64 v21; // rdi
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // [rsp+8h] [rbp-C0h]
  int v28; // [rsp+10h] [rbp-B8h]
  int v29; // [rsp+14h] [rbp-B4h]
  unsigned __int64 v30; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v31; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v32; // [rsp+30h] [rbp-98h]
  int v33; // [rsp+40h] [rbp-88h]
  __int64 v34; // [rsp+48h] [rbp-80h]
  int v38; // [rsp+68h] [rbp-60h]
  __int64 v39; // [rsp+70h] [rbp-58h] BYREF
  __int128 v40; // [rsp+78h] [rbp-50h]
  unsigned __int64 v41; // [rsp+88h] [rbp-40h]

  func = a3;
  v41 = __readfsqword(0x28u);
  v34 = *a3;
  v9 = getseg(a2);
  v32 = 0;
  if ( v9 )
  {
    v10 = v9;
    that = next_that(a2, *(_QWORD *)(v9 + 8), sub_1A110, 0);
    if ( that > *(_QWORD *)(v10 + 8) )
      that = *(_QWORD *)(v10 + 8);
    v12 = that - a2;
    v32 = v12 >> 2;
    if ( a5 )
    {
      if ( v12 > 0xF )
        v32 = ((v12 >> 2) - 4) / 3;
      else
        v32 = 0;
    }
  }
  if ( !(unsigned __int8)sub_1F560(a1, func, 0) )
    return v41 - __readfsqword(0x28u);
  if ( (a6 & 1) != 0 )
    return v41 - __readfsqword(0x28u);
  sub_11A90((__int64)func);
  sub_F260(a1, (__int64)func, a4);
  if ( !v32 )
    return v41 - __readfsqword(0x28u);
  v38 = 4;
  while ( 1 )
  {
    v40 = 0;
    v39 = 0;
    if ( !(unsigned __int8)sub_1DC00(a1, (__int64)&v39, 0x7FFF, func) )
      break;
    v13 = v40;
    v28 = 0;
    v14 = 0;
    v15 = 0;
    if ( !(_QWORD)v40 )
      goto LABEL_46;
    do
    {
      while ( 1 )
      {
        ++v28;
        v16 = v39 + 16 * v15;
        v17 = v15;
        dword = *(_DWORD *)(v16 + 8);
        v15 = v28;
        if ( dword >= 0 && v13 - v17 != 1 )
        {
          v30 = *(_QWORD *)v16;
          v31 = *(_QWORD *)(v39 + 16LL * v28);
          if ( *(_QWORD *)v16 < v31 )
            break;
        }
        if ( v28 >= v13 )
          goto LABEL_36;
      }
      v29 = 0;
      v19 = sub_1A200(a2, dword, a5);
      while ( v19 != -1 )
      {
        if ( !(unsigned __int8)is_mapped(v19) )
          break;
        if ( !(unsigned __int8)is_mapped(v19 + 11) )
          break;
        if ( dword >= (int)v32 )
          break;
        v33 = dword + 1;
        dword = get_dword(v19);
        if ( dword < -3 )
        {
          if ( *(_DWORD *)(v16 + 8) | v29 )
            break;
        }
        v20 = (unsigned int)get_dword(v19 + 4);
        v27 = (unsigned int)get_dword(v19 + 8);
        if ( dword >= 0 )
          v19 = sub_1A200(a2, dword, a5);
        if ( !(unsigned __int8)is_mapped(v27) )
          break;
        if ( v20 > 1 )
        {
          if ( !(unsigned __int8)is_mapped(v20) )
            break;
LABEL_45:
          sub_F340(a1, v30, v31, v27, v20);
          goto LABEL_31;
        }
        if ( v20 )
          goto LABEL_45;
        sub_F340(a1, v30, v31, -1, v27);
LABEL_31:
        if ( v14 < v33 )
          v14 = v33;
        if ( dword >= 0 && ++v29 != 5 )
          continue;
        break;
      }
      v13 = v40;
    }
    while ( v28 < (unsigned __int64)v40 );
LABEL_36:
    if ( !v14 )
    {
LABEL_46:
      v23 = 3;
      goto LABEL_47;
    }
    if ( v32 >= v14 )
    {
      v23 = 3 * v14;
    }
    else
    {
      if ( !(_DWORD)v32 )
        goto LABEL_39;
      v23 = 3 * v32;
    }
LABEL_47:
    if ( a5 )
      v24 = 4LL * (v23 + 4);
    else
      v24 = 4LL * v23;
    sub_13520(a1, a2, a5 == 0 ? 14 : 16, v24, 1);
LABEL_39:
    func = (__int64 *)get_func(v34);
    if ( !(unsigned __int8)sub_1F560(a1, func, 1) )
      goto LABEL_59;
    if ( !--v38 )
    {
      v21 = v39;
      if ( v39 )
        goto LABEL_42;
      return v41 - __readfsqword(0x28u);
    }
    sub_11A90((__int64)func);
    if ( v39 )
    {
      *(_QWORD *)&v40 = 0;
      qfree(v39);
    }
    sub_F260(a1, (__int64)func, a4);
  }
  if ( a5 )
  {
    v25 = 28;
    v26 = 16;
  }
  else
  {
    v25 = 12;
    v26 = 14;
  }
  sub_13520(a1, a2, v26, v25, 1);
LABEL_59:
  v21 = v39;
  if ( v39 )
  {
LABEL_42:
    *(_QWORD *)&v40 = 0;
    qfree(v21);
  }
  return v41 - __readfsqword(0x28u);
}
