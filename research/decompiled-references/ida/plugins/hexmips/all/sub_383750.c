unsigned __int64 __fastcall sub_383750(__int64 a1, __int64 *a2, __int64 *a3, _QWORD *a4, __int64 a5, char a6)
{
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // r12
  unsigned __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r12
  unsigned __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v23; // [rsp+10h] [rbp-108h]
  unsigned __int64 v24; // [rsp+10h] [rbp-108h]
  unsigned __int64 v26; // [rsp+40h] [rbp-D8h]
  unsigned __int64 v27; // [rsp+D8h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  if ( a4[1] )
  {
    *a3 += a5;
    v10 = 1;
    copy_tinfo_t();
    while ( 1 )
    {
      if ( !a6 )
      {
        v11 = *a3;
        if ( !*a3 )
          break;
      }
      if ( (get_tinfo_property() & 0x3F) == 0x1D )
      {
        if ( v10 >= a4[1] )
          goto LABEL_18;
        v12 = *(_QWORD *)(*a4 + 8 * v10++);
        v13 = *(unsigned int *)(v12 + 56);
      }
      else
      {
        v13 = *a3;
      }
      v26 = v13;
      if ( (unsigned int)find_tinfo_udt_member() == -1 )
        goto LABEL_18;
      v14 = a2[1];
      v15 = 2;
      if ( v14 )
        v15 = v14-- + 1;
      v16 = *a2;
      if ( a2[2] < v15 )
      {
        v23 = v15;
        v20 = qvector_reserve();
        *a2 = v20;
        v15 = v23;
        v16 = v20;
      }
      a2[1] = v15;
      *(_BYTE *)(v16 + v14) = 46;
      *(_BYTE *)(*a2 + v14 + 1) = 0;
      v17 = a2[1];
      v18 = 2;
      if ( v17 )
        v18 = v17-- + 1;
      v19 = *a2;
      if ( a2[2] < v18 )
      {
        v24 = v18;
        v21 = qvector_reserve();
        *a2 = v21;
        v18 = v24;
        v19 = v21;
      }
      a2[1] = v18;
      *(_BYTE *)(v19 + v17) = 63;
      *(_BYTE *)(*a2 + v17 + 1) = 0;
      *a3 -= v26 >> 3;
      copy_tinfo_t();
      if ( (get_tinfo_property() & 0x2F) != 0xD )
      {
LABEL_18:
        clear_tinfo_t();
        v11 = *a3;
        break;
      }
      clear_tinfo_t();
    }
    *a3 = v11 - a5;
    clear_tinfo_t();
  }
  return v27 - __readfsqword(0x28u);
}

