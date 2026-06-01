__int64 __fastcall sub_CEE0(__int64 a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  __int64 v4; // r15
  __int64 v7; // r12
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rdx
  char v15; // cl
  __int64 v16; // rax
  __int64 flags; // r12
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  char v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rdx
  unsigned int v28; // r15d
  __int64 v29; // rax
  int v30; // r15d
  unsigned int v31; // ebx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  char v35; // al
  __int64 v36; // rsi
  _DWORD *v37; // rdi
  __int64 i; // rcx
  char refinfo; // al
  __int64 v40; // [rsp+8h] [rbp-B0h]
  __int64 v41; // [rsp+10h] [rbp-A8h]
  unsigned int v42; // [rsp+18h] [rbp-A0h]
  __int64 v43; // [rsp+18h] [rbp-A0h]
  unsigned __int8 v44; // [rsp+18h] [rbp-A0h]
  unsigned int v45; // [rsp+28h] [rbp-90h] BYREF
  unsigned int v46; // [rsp+2Ch] [rbp-8Ch] BYREF
  __int64 v47; // [rsp+30h] [rbp-88h] BYREF
  __int64 v48; // [rsp+38h] [rbp-80h] BYREF
  __int64 v49; // [rsp+40h] [rbp-78h] BYREF
  __int64 v50; // [rsp+48h] [rbp-70h] BYREF
  _BYTE v51[8]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v52; // [rsp+58h] [rbp-60h]
  unsigned __int64 v53; // [rsp+78h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 344) & 1) == 0 )
    return v53 - __readfsqword(0x28u);
  v4 = (int)a3;
  v7 = a2 + 40LL * (int)a3;
  if ( *(_BYTE *)(v7 + 41) != 4 )
    return v53 - __readfsqword(0x28u);
  v11 = sub_BE80(
          a1,
          (__int64)&v47,
          &v48,
          &v45,
          &v49,
          &v46,
          &v50,
          *(_QWORD *)(a2 + 16),
          *(unsigned __int16 *)(v7 + 46),
          1);
  if ( !v11 )
    return v53 - __readfsqword(0x28u);
  v12 = *(_QWORD *)(v7 + 56);
  v41 = v49;
  v40 = v47;
  if ( v49 == -1 || v48 == -1 )
  {
    if ( v50 == -1 && v11 != -1 )
    {
LABEL_13:
      v14 = a2 + 40 * v4;
      v12 = *(_QWORD *)(v14 + 56);
      if ( !v12 )
        goto LABEL_23;
      v15 = *(_BYTE *)(v14 + 72);
LABEL_15:
      if ( (v15 & 4) == 0 )
      {
LABEL_16:
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v12 + v40);
        goto LABEL_24;
      }
LABEL_23:
      v13 = v40;
LABEL_24:
      if ( v41 == -1 )
        goto LABEL_28;
      goto LABEL_25;
    }
    if ( !v12 )
      goto LABEL_23;
    v15 = *(_BYTE *)(a2 + 40 * v4 + 72);
    if ( (v15 & 6) != 0 )
      goto LABEL_15;
LABEL_19:
    v42 = v11;
    v16 = use_mapping(v47);
    if ( (unsigned __int8)is_mapped(v16) )
    {
      flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
      v18 = is_defarg(flags, a3);
      v20 = v42;
      v21 = v18;
      if ( v42 == -1 )
      {
        v44 = v18;
        v35 = is_off(flags, a3, v20, v19, v18);
        v21 = v44;
        if ( v35 )
        {
          v36 = *(_QWORD *)(a2 + 16);
          v37 = v51;
          for ( i = 8; i; --i )
            *v37++ = 0;
          refinfo = get_refinfo(v51, v36, a3, 0, v44);
          v21 = v44;
          if ( refinfo )
          {
            if ( v52 != v40 )
              goto LABEL_22;
          }
        }
      }
      if ( !v21 )
LABEL_22:
        op_offset(*(_QWORD *)(a2 + 16), a3, 129, -1, v40, 0);
    }
    goto LABEL_13;
  }
  if ( v12 )
  {
    if ( (*(_BYTE *)(v7 + 72) & 6) != 0 )
    {
      if ( (*(_BYTE *)(v7 + 72) & 4) != 0 )
      {
        v13 = v47;
LABEL_25:
        if ( v48 == -1 )
        {
          v22 = *(_QWORD *)(a2 + 16);
          v45 = a3;
          v40 = v13;
          v48 = v22;
        }
        goto LABEL_27;
      }
      goto LABEL_16;
    }
    goto LABEL_19;
  }
  v13 = v47;
LABEL_27:
  v23 = use_mapping(v40);
  if ( (unsigned __int8)is_mapped(v23) )
  {
    v28 = v45;
    v43 = v48;
    v29 = get_flags_ex(v48, 0);
    if ( !(unsigned __int8)is_defarg(v29, v28) )
      op_offset(v43, v28, 132, v40, 0, 0);
    v30 = *(_DWORD *)(a1 + 340);
    v31 = v46;
    v32 = get_flags_ex(v41, 0);
    if ( !(unsigned __int8)is_defarg(v32, v31) )
      op_offset(v41, v31, (unsigned __int8)v30 | 0xC0u, v40, 0, 0);
  }
LABEL_28:
  v24 = use_mapping(v13);
  if ( !(unsigned __int8)is_mapped(v24) )
    return v53 - __readfsqword(0x28u);
  v25 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
  if ( (unsigned __int8)is_defarg(v25, a3) )
    return v53 - __readfsqword(0x28u);
  if ( *(_WORD *)(a2 + 24) == 88 )
  {
    v33 = get_flags_ex(v24, 4);
    v34 = v33 & 0x600;
    if ( v34 == 1024 )
    {
LABEL_42:
      v26 = *(_QWORD *)(a2 + 16);
      v27 = 1;
      return add_dref(v26, v24, v27);
    }
    if ( v34 == 1536 )
    {
      if ( (v33 & 0x10000) == 0 )
        goto LABEL_42;
    }
    else if ( (v33 & 0x600) != 0 )
    {
      return v53 - __readfsqword(0x28u);
    }
    if ( (v33 & 0xD000) != 0 )
      goto LABEL_42;
    return v53 - __readfsqword(0x28u);
  }
  v26 = *(_QWORD *)(a2 + 16);
  v27 = 3 - (unsigned int)a4;
  return add_dref(v26, v24, v27);
}
