_BOOL8 __fastcall sub_286270(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rax
  _BOOL4 v4; // ebp
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rbp
  __int64 v9; // r15
  int v10; // eax
  __int64 v11; // r13
  __int64 v12; // r14
  int v13; // eax
  int v14; // edx
  int v15; // r10d
  __int64 v16; // r9
  int v17; // eax
  int v18; // eax
  int tinfo_property; // [rsp+0h] [rbp-88h]
  __int64 v20; // [rsp+0h] [rbp-88h]
  __int64 v21; // [rsp+8h] [rbp-80h]
  __int64 v22; // [rsp+8h] [rbp-80h]
  __int64 v23; // [rsp+10h] [rbp-78h]
  int v24; // [rsp+10h] [rbp-78h]
  int v25; // [rsp+18h] [rbp-70h]
  _QWORD *v26; // [rsp+30h] [rbp-58h]

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 <= 0x21 )
  {
    if ( v2 <= 0x1F )
      return 0;
    v6 = *(_QWORD *)(a2 + 32);
    v4 = 0;
    if ( *(_DWORD *)(v6 + 8) != 61 )
      return v4;
    v7 = sub_2511B0(*(__int64 **)(v6 + 24));
    v8 = 1LL << v7;
    if ( (unsigned __int64)v7 >= 0x40 )
      v8 = 0;
  }
  else
  {
    if ( v2 - 38 > 1 )
      return 0;
    v3 = *(_QWORD *)(a2 + 32);
    v4 = 0;
    if ( *(_DWORD *)(v3 + 8) != 61 )
      return v4;
    v8 = sub_2511B0(*(__int64 **)(v3 + 24));
  }
  v9 = *(_QWORD *)(a2 + 24);
  v26 = nullptr;
  v10 = *(_DWORD *)(v9 + 8);
  if ( v10 == 48 )
  {
    if ( (unsigned int)get_tinfo_property() == 1 )
    {
      v26 = (_QWORD *)qvector_reserve();
      *v26 = v9;
      v9 = *(_QWORD *)(v9 + 24);
    }
    if ( *(_DWORD *)(v9 + 8) != 36 )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( v10 != 36 )
    return 0;
LABEL_12:
  if ( (*(_BYTE *)(v9 + 56) & 1) != 0 )
  {
    v11 = *(_QWORD *)(v9 + 24);
    v12 = *(_QWORD *)(v9 + 32);
    tinfo_property = get_tinfo_property();
    v13 = get_tinfo_property();
    v14 = v13;
    v15 = v13;
    if ( *(_DWORD *)(v11 + 8) == 48 && tinfo_property == 1 )
    {
      v25 = v13;
      v24 = v13;
      v22 = *(_QWORD *)(v11 + 24);
      v18 = get_tinfo_property();
      v16 = v11;
      v15 = v24;
      v11 = v22;
      tinfo_property = v18;
      v14 = v25;
    }
    else
    {
      v16 = v9;
    }
    if ( *(_DWORD *)(v12 + 8) == 48 && v14 == 1 )
    {
      v23 = v16;
      v21 = *(_QWORD *)(v12 + 24);
      v17 = get_tinfo_property();
      v9 = v12;
      v16 = v23;
      v12 = v21;
      v15 = v17;
    }
    if ( tinfo_property == v8 && v15 == v8 )
    {
      v20 = v16;
      if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 1u
        && (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 1u )
      {
        v4 = sub_240DD0(*(_QWORD *)(a1 + 72), v11, v12, 0x16u);
        if ( v4 )
        {
          copy_tinfo_t();
          sub_250520(v20);
          sub_250520(v9);
          if ( *(_QWORD *)(a2 + 24) )
          {
            sub_250DB0(*(_QWORD *)(a2 + 24));
            clear_tinfo_t();
            j__qfree();
          }
          if ( *(_QWORD *)(a2 + 32) )
          {
            sub_250DB0(*(_QWORD *)(a2 + 32));
            clear_tinfo_t();
            j__qfree();
          }
          *(_DWORD *)(a2 + 8) = 36;
          *(_QWORD *)(a2 + 24) = v11;
          *(_QWORD *)(a2 + 32) = v12;
          sub_23F940(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
          if ( (unsigned int)lexcompare_tinfo()
            && (unsigned __int8)sub_27F280(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
          {
            *(_DWORD *)(a1 + 8) |= 8u;
          }
          clear_tinfo_t();
          goto LABEL_14;
        }
      }
    }
  }
LABEL_13:
  v4 = 0;
LABEL_14:
  if ( v26 )
    qfree();
  return v4;
}

