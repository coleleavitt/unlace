__int64 __fastcall sub_4E7C0(__int64 a1, __int64 a2, __int64 *a3, char a4, const char *a5)
{
  unsigned __int64 v5; // rax
  char v8; // dl
  unsigned __int64 v9; // rcx
  int v10; // r13d
  __int64 v11; // r12
  __int64 *v12; // r15
  __int64 v13; // rsi
  int flags; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 qword; // rax
  int v19; // esi
  unsigned __int64 v20; // rcx
  const char *v21; // rax
  char *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 dword; // rsi
  __int64 v27; // r8
  const char *v28; // rsi
  const char *v29; // rdx
  const char *v30; // r10
  __int64 named_type_tid; // rax
  __int64 strid; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // [rsp+0h] [rbp-88h]
  unsigned int v36; // [rsp+8h] [rbp-80h]
  const char *v37; // [rsp+8h] [rbp-80h]
  unsigned __int64 v38; // [rsp+8h] [rbp-80h]
  int v40; // [rsp+14h] [rbp-74h]
  __int64 v42; // [rsp+20h] [rbp-68h]
  __int64 v43; // [rsp+28h] [rbp-60h]
  const char *v44; // [rsp+30h] [rbp-58h] BYREF
  __int128 v45; // [rsp+38h] [rbp-50h]
  unsigned __int64 v46; // [rsp+48h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  if ( *a3 <= 0 )
    return v46 - __readfsqword(0x28u);
  v5 = a3[2];
  if ( !v5 )
    return v46 - __readfsqword(0x28u);
  v42 = a3[1] + *(_QWORD *)(a2 + 608);
  v8 = *(_BYTE *)(a2 + 617);
  v9 = a4 ? (-(__int64)(v8 == 0) & 0xFFFFFFFFFFFFFFF4LL) + 24 : (-(__int64)(v8 == 0) & 0xFFFFFFFFFFFFFFF8LL) + 16;
  v35 = v9;
  v40 = v5 / v9;
  if ( v40 <= 0 )
    return v46 - __readfsqword(0x28u);
  v10 = 0;
  v11 = v42 + 8;
  while ( 1 )
  {
    if ( a4 )
    {
      v12 = (__int64 *)(a1 + 496);
      if ( *(_QWORD *)(a1 + 496) != -1 )
        goto LABEL_9;
      v29 = "struct Elf64_Rela{  unsigned __int64 r_offset;  unsigned __int64 r_info;  __int64 r_addend;};";
      v30 = "Elf64_Rela";
      if ( !*(_BYTE *)(a2 + 617) )
      {
        v29 = "struct Elf32_Rela{  unsigned __int32 r_offset;  unsigned __int32 r_info;  __int32 r_addend;};";
        v30 = "Elf32_Rela";
      }
    }
    else
    {
      v12 = (__int64 *)(a1 + 488);
      if ( *(_QWORD *)(a1 + 488) != -1 )
        goto LABEL_9;
      v29 = "struct Elf64_Rel{  unsigned __int64 r_offset;  unsigned __int64 r_info;};";
      v30 = "Elf64_Rel";
      if ( !*(_BYTE *)(a2 + 617) )
      {
        v29 = "struct Elf32_Rel{  unsigned __int32 r_offset;  unsigned __int32 r_info;};";
        v30 = "Elf32_Rel";
      }
    }
    v37 = v30;
    h2ti(0, 0, v29, 1024, 0, 0, sub_EAA0, 0, 0);
    named_type_tid = get_named_type_tid(v37);
    *v12 = named_type_tid;
    if ( named_type_tid == -1 )
      break;
LABEL_9:
    if ( !(unsigned __int8)is_loaded(v11 - 8) )
      break;
    v13 = 4;
    flags = get_flags_ex(v11 - 8, 4);
    if ( (flags & 0x600) != 0x400 || (flags & 0xF0000000) != 0x60000000 )
    {
      v15 = *v12;
LABEL_12:
      v13 = 1610612736;
      create_data(v11 - 8, 1610612736, v35, v15);
      goto LABEL_13;
    }
    strid = get_strid(v11 - 8);
    v15 = *v12;
    if ( *v12 != strid )
      goto LABEL_12;
LABEL_13:
    if ( *(_BYTE *)(a2 + 617) )
      qword = get_qword(v11);
    else
      qword = (unsigned int)get_dword(v11 - 4, v13, v16, v15, v17);
    if ( *(_BYTE *)(a2 + 617) )
    {
      v19 = qword;
      v20 = HIDWORD(qword);
      if ( *(_WORD *)(a2 + 522) == 8 )
      {
        v19 = (unsigned __int8)qword;
        if ( !*(_BYTE *)(a2 + 616) )
        {
          LODWORD(v20) = qword;
          v19 = HIBYTE(qword);
        }
      }
    }
    else
    {
      v19 = (unsigned __int8)qword;
      LODWORD(v20) = qword >> 8;
    }
    v36 = v20;
    v44 = nullptr;
    v45 = 0;
    v21 = sub_35F50(a2, v19);
    v22 = "%s ";
    sub_2B240((__int64 *)&v44, (__int64)"%s ", v21);
    v25 = v36;
    if ( v36 )
    {
      v23 = *(_QWORD *)(a2 + 312);
      if ( v36 < *(_DWORD *)(a2 + 296) - (int)v23 )
      {
        v22 = (char *)a2;
        v34 = sub_49020(*(_QWORD *)(a2 + 288) + 96 * (v23 + v36), (_QWORD *)a2);
        if ( *(_QWORD *)(v34 + 8) > 1u )
        {
          v22 = "%s";
          sub_2BDC0((__int64 *)&v44, (__int64)"%s", *(const char **)v34);
        }
      }
    }
    if ( a4 )
    {
      if ( *(_BYTE *)(a2 + 617) )
        dword = get_qword(v11 + 8);
      else
        dword = (int)get_dword(v11, v22, v23, v25, v24);
      append_disp(&v44, dword, 0);
    }
    v27 = v45;
    if ( (unsigned __int64)v45 <= 1 )
      goto LABEL_24;
    v28 = v44;
    if ( v44[(_QWORD)v45 - 2] == 32 )
    {
      v33 = v45 - 1;
      if ( (__int64)v45 - 1 > 1 )
      {
        if ( *((_QWORD *)&v45 + 1) < v33 )
        {
          v43 = v45;
          v38 = v45 - 1;
          v44 = (const char *)qvector_reserve(&v44, v44, v33, 1);
          v27 = v43;
          v28 = v44;
          v33 = v38;
        }
        *(_QWORD *)&v45 = v33;
        v28[v27 - 2] = 0;
        v27 = v45;
        goto LABEL_24;
      }
      if ( v44 )
      {
        *(_QWORD *)&v45 = 0;
        qfree(v44);
        v44 = nullptr;
        v27 = v45;
        *((_QWORD *)&v45 + 1) = 0;
LABEL_24:
        v28 = &s1;
        if ( v27 )
          v28 = v44;
      }
    }
    set_cmt(v11 - 8, v28, 0);
    if ( v44 )
    {
      *(_QWORD *)&v45 = 0;
      qfree(v44);
    }
    ++v10;
    v11 += v35;
    if ( v40 == v10 )
      return sub_E890(v42, 1u, (__int64)"ELF %s Relocation Table", a5);
  }
  if ( !v10 )
    return v46 - __readfsqword(0x28u);
  return sub_E890(v42, 1u, (__int64)"ELF %s Relocation Table", a5);
}
