__int64 __fastcall sub_43560(__int64 a1, __int64 a2, _QWORD *a3)
{
  char tinfo_property; // al
  __int64 v6; // rdi
  unsigned int v7; // ebp
  char v9; // al
  __int64 v10; // rdi
  __int64 *v11; // rsi
  __int64 v12; // rdx
  int v13; // ebp
  __int64 v14; // rax
  int v15; // r12d
  __int64 (__fastcall **v16)(); // rdi
  __int64 v17; // r13
  __int64 v18; // r12
  __int64 (__fastcall **v19)(); // rbx
  __int64 (__fastcall *v20)(); // rdi
  __int64 (__fastcall *v21)(); // rdi
  char v22; // al
  __int64 v23; // rdi
  char v24; // r12
  __int64 tinfo_size; // rbp
  int v26; // eax
  __int64 (__fastcall **v27)(); // [rsp+20h] [rbp-98h] BYREF
  __int64 v28; // [rsp+28h] [rbp-90h]
  __int64 v29; // [rsp+30h] [rbp-88h] BYREF
  int v30; // [rsp+38h] [rbp-80h]
  __int64 (__fastcall **v31)(); // [rsp+40h] [rbp-78h] BYREF
  __int128 v32; // [rsp+48h] [rbp-70h] BYREF
  __int128 v33; // [rsp+58h] [rbp-60h]
  __int64 v34; // [rsp+68h] [rbp-50h]
  int v35; // [rsp+70h] [rbp-48h]
  unsigned __int64 v36; // [rsp+78h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 8) |= 2u;
  tinfo_property = get_tinfo_property(*a3, 2);
  v6 = *a3;
  if ( (tinfo_property & 0xF) == 0xB )
  {
    v27 = nullptr;
    v28 = 0;
    v7 = -1;
    if ( !(unsigned __int8)get_tinfo_details(v6, 11, &v27) )
    {
LABEL_3:
      clear_tinfo_t(&v27);
      return v7;
    }
    v31 = &off_84D48;
    v32 = 4u;
    LODWORD(v33) = 0;
    v7 = visit_subtypes(&v31, 0, &v27, 0, 0);
    if ( v7 || !(_DWORD)v33 )
      goto LABEL_36;
    if ( *(_DWORD *)(a1 + 24) )
    {
      if ( (unsigned int)lexcompare_tinfo(*((_QWORD *)&v32 + 1), *(_QWORD *)(a1 + 16), 0) )
      {
LABEL_36:
        v7 = -1;
LABEL_37:
        v31 = &off_84D48;
        clear_tinfo_t((char *)&v32 + 8);
        goto LABEL_3;
      }
    }
    else
    {
      copy_tinfo_t(a1 + 16, (char *)&v32 + 8);
    }
    v26 = v33;
    *(_DWORD *)(a1 + 8) |= 1u;
    *(_DWORD *)(a1 + 24) += HIDWORD(v28) * v26;
    goto LABEL_37;
  }
  v9 = get_tinfo_property(v6, 2);
  v10 = *a3;
  if ( (v9 & 0x3F) != 0x1D )
  {
    v22 = get_tinfo_property(v10, 2);
    v23 = *a3;
    v24 = v22;
    if ( *(_DWORD *)(a1 + 24) )
    {
      if ( (get_tinfo_property(v23, 2) & 0xF) != 9 || !(unsigned int)lexcompare_tinfo(*a3, *(_QWORD *)(a1 + 16), 0) )
      {
        tinfo_size = get_tinfo_size(0, *a3, 0);
        if ( get_tinfo_size(0, *(_QWORD *)(a1 + 16), 0) == tinfo_size )
          goto LABEL_31;
      }
    }
    else if ( (get_tinfo_property(v23, 2) & 0xF) == 9 || get_tinfo_property(*a3, 281) )
    {
      copy_tinfo_t(a1 + 16, a3);
LABEL_31:
      ++*(_DWORD *)(a1 + 24);
      v7 = 0;
      *(_DWORD *)(a1 + 8) |= 1u;
      return v7;
    }
    return (unsigned int)((v24 & 0x2F) == 13) - 1;
  }
  v11 = (_QWORD *)(byte_9 + 4);
  v31 = nullptr;
  v35 = 1;
  v34 = 0;
  v32 = 0;
  v33 = 0;
  if ( (unsigned __int8)get_tinfo_details(v10, 13, &v31) )
  {
    if ( !(_QWORD)v32 )
    {
      v13 = 0;
LABEL_45:
      *(_DWORD *)(a1 + 24) += v13;
      v7 = 0;
      *(_DWORD *)(a1 + 8) |= 1u;
      goto LABEL_18;
    }
    v13 = 0;
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      v11 = nullptr;
      v28 = 4;
      v27 = &off_84D48;
      v29 = 0;
      v30 = 0;
      if ( (unsigned int)visit_subtypes(&v27, 0, &v31[18 * v14 + 8], 0, 0) )
        break;
      v11 = *(__int64 **)(a1 + 16);
      if ( (_BYTE)v11 )
      {
        if ( (unsigned int)lexcompare_tinfo(v29, v11, 0) )
          break;
      }
      else
      {
        v11 = &v29;
        copy_tinfo_t(a1 + 16, &v29);
      }
      v27 = &off_84D48;
      if ( v13 < v30 )
        v13 = v30;
      ++v15;
      clear_tinfo_t(&v29);
      v14 = v15;
      if ( v15 >= (unsigned __int64)v32 )
        goto LABEL_45;
    }
    v27 = &off_84D48;
    clear_tinfo_t(&v29);
  }
  v7 = -1;
LABEL_18:
  v16 = v31;
  if ( v31 )
  {
    v17 = v32;
    if ( (_QWORD)v32 )
    {
      v18 = 0;
      do
      {
        v19 = &v16[18 * v18];
        clear_tinfo_t(v19 + 8);
        v20 = v19[5];
        if ( v20 )
        {
          v19[6] = nullptr;
          qfree(v20, v11, v12, 0.0);
        }
        v21 = v19[2];
        if ( v21 )
        {
          v19[3] = nullptr;
          qfree(v21, v11, v12, 0.0);
        }
        ++v18;
        v16 = v31;
      }
      while ( v17 != v18 );
    }
    *(_QWORD *)&v32 = 0;
    qfree(v16, v11, v12, 0.0);
  }
  return v7;
}

