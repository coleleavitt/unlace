__int64 __fastcall sub_4A420(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int16 v10; // bx
  int v11; // ebx
  char *v12; // r8
  unsigned __int64 item_end; // r14
  unsigned __int64 v15; // rbp
  __int64 qword; // rax
  __int64 v17; // rbx
  unsigned int dword; // eax
  __int64 v19; // rdx
  int v20; // ebp
  unsigned int radix; // eax
  const char *v22; // [rsp+8h] [rbp-120h]
  bool v23; // [rsp+13h] [rbp-115h]
  unsigned int v24; // [rsp+14h] [rbp-114h]
  const char *v25; // [rsp+20h] [rbp-108h] BYREF
  __int128 v26; // [rsp+28h] [rbp-100h]
  __int64 v27; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v28; // [rsp+48h] [rbp-E0h]
  _BYTE v29[136]; // [rsp+60h] [rbp-C8h] BYREF
  unsigned __int64 v30; // [rsp+E8h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a2 + 16);
  if ( !a3 )
  {
    v6 = *(unsigned int *)(a1 + 288);
    if ( (unsigned int)(v6 - 1) <= 8 )
    {
      v19 = 790;
      if ( _bittest64(&v19, v6) )
      {
        if ( *(_QWORD *)(a1 + 424) == v5 )
        {
          v20 = *(_DWORD *)(a2 + 144) & 0x1890;
          *(_DWORD *)(a2 + 144) &= 0xFFFFE76F;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 160LL))(a2);
          sub_48290(a2, 0xFFFF, (__int64)&unk_68B1F);
          *(_DWORD *)(a2 + 144) |= v20;
        }
      }
    }
  }
  v26 = 0;
  v25 = nullptr;
  get_ea_name(&v25, v5, 3, 0);
  v22 = s1;
  if ( (_QWORD)v26 )
    v22 = v25;
  v7 = v5;
  v24 = (char)netnode_charval(*(_QWORD *)(a1 + 120), v5, 257) - 1;
  v8 = getseg(v5);
  v23 = 0;
  if ( v8 )
    v23 = *(_BYTE *)(v8 + 43) == 2;
  if ( v24 != -1 )
  {
    if ( v24 == 3 )
    {
      item_end = get_item_end(v5);
      if ( (*(_BYTE *)(a2 + 721) & 0xC0) == 0 )
        set_dummy_name(-1, v5);
      v15 = v5;
      if ( v23 )
      {
        do
        {
          qword = get_qword(v15);
          v17 = qword;
          if ( !a3 )
            goto LABEL_23;
          v7 = qword;
          add_dref(v5, qword, 1);
          v15 += 8LL;
        }
        while ( v15 < item_end );
      }
      else
      {
        while ( 1 )
        {
          dword = get_dword(v15);
          v17 = dword;
          if ( !a3 )
            break;
          v7 = dword;
          add_dref(v5, dword, 1);
          v15 += 4LL;
          if ( v15 >= item_end )
            goto LABEL_14;
        }
        while ( 1 )
        {
LABEL_23:
          v28 = 0;
          v27 = 0;
          if ( get_name_expr(&v27, v5, 0, v17, v17, 1) <= 0 )
          {
            radix = get_radix(*(_QWORD *)(a2 + 720), 0);
            btoa64(v29, 136, v17, radix);
            sub_47050(&v27, (__int64)&unk_68B28, v29);
          }
          v7 = 0xFFFFFFFFLL;
          if ( (unsigned __int8)sub_48290(a2, 0xFFFFFFFFLL, (__int64)&unk_68B2F, v22, v27) )
            break;
          if ( v27 )
          {
            *(_QWORD *)&v28 = 0;
            qfree(v27, 0xFFFFFFFFLL, v9, 0.0);
          }
          v7 = v17;
          add_dref(v5, v17, 1);
          if ( v23 )
          {
            v15 += 8LL;
            if ( v15 >= item_end )
              goto LABEL_14;
            v17 = get_qword(v15);
          }
          else
          {
            v15 += 4LL;
            if ( v15 >= item_end )
              goto LABEL_14;
            v17 = (unsigned int)get_dword(v15);
          }
        }
        if ( v27 )
        {
          *(_QWORD *)&v28 = 0;
          qfree(v27, 0xFFFFFFFFLL, v9, 0.0);
        }
      }
    }
    else
    {
      v10 = *(_DWORD *)(a2 + 144);
      *(_DWORD *)(a2 + 144) &= 0xFFFFE76F;
      v11 = v10 & 0x1890;
      if ( (*(_BYTE *)(a2 + 721) & 0x40) == 0 )
        set_dummy_name(-1, v5);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 160LL))(a2);
      v12 = "";
      if ( v24 <= 0x10 )
        v12 = off_92A20[v24];
      v7 = 0xFFFF;
      sub_48290(a2, 0xFFFF, (__int64)&unk_68B4A, v22, v12);
      *(_DWORD *)(a2 + 144) |= v11;
    }
  }
LABEL_14:
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25, v7, v9, 0.0);
  }
  return v24;
}

