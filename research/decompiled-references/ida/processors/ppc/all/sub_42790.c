__int64 __fastcall sub_42790(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int8 *a4)
{
  unsigned int v6; // ebx
  unsigned int v8; // r14d
  __int64 flags; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned __int64 v15; // [rsp+8h] [rbp-70h] BYREF
  __int64 v16; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-60h] BYREF
  _BYTE v18[16]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v19; // [rsp+30h] [rbp-48h]
  char v20; // [rsp+38h] [rbp-40h]
  unsigned __int64 v21; // [rsp+48h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  if ( a4[5] != ((unsigned __int8)getinf_flag(3, 4) == 0 ? 2 : 7) )
    return 0;
  if ( !(unsigned __int8)sub_42380(a3) )
    return 0;
  v8 = *a4;
  flags = get_flags_ex(a2, 0);
  if ( !(unsigned __int8)is_off(flags, v8)
    || (get_flags_ex(a3, 4) & 0xF00000) != 0x500000
    || !(unsigned __int8)get_refinfo(v18, a3, 0) )
  {
    return 0;
  }
  v10 = a4[5] == 2 ? (unsigned int)get_dword(a3) : get_qword(a3);
  if ( !(unsigned __int8)calc_reference_data(&v15, &v16, a3, v18, v10) )
    return 0;
  v11 = 65;
  if ( !v19 )
    v11 = 1;
  add_dref(a2, v15, v11);
  if ( v20 >= 0 )
  {
    v13 = v16;
    v14 = getseg(v15);
    if ( v13 != get_segm_base(v14) )
      add_dref(a2, v16, 129);
  }
  if ( v15 > 0x20 && (v6 = is_mapped(v15), (_BYTE)v6) )
  {
    v12 = *(_QWORD *)(a1 + 120);
    v17 = v15;
    netnode_supset(v12, a2, &v17, 8, 833);
  }
  else
  {
    return 0;
  }
  return v6;
}

