__int64 __fastcall sub_9850(_QWORD *a1)
{
  __int64 module_data; // rax
  const char *v3; // rdi
  __int64 v4; // r12
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // [rsp+0h] [rbp-58h] BYREF
  _OWORD v15[2]; // [rsp+8h] [rbp-50h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  module_data = get_module_data((unsigned int)dword_2D4F4);
  sub_19F50(module_data, a1[30], 0);
  *((_DWORD *)a1 + 36) &= ~0x10u;
  if ( !*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33201)
    || (*(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 148) & 2) != 0
    || (*(_QWORD *)((char *)v15 + 12) = -1,
        v10 = get_module_data((unsigned int)dword_2D4F4),
        !(unsigned __int8)sub_19BC0(v10, a1 + 28, &v14)) )
  {
LABEL_3:
    sub_10E20(a1, 4);
    (*(void (__fastcall **)(_QWORD *))(*a1 + 296LL))(a1);
    v3 = s1;
    if ( a1[4] )
      v3 = (const char *)a1[3];
    v4 = tag_strlen(v3);
    *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 176) = v4;
    if ( *((_BYTE *)a1 + 265) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 304LL))(a1, 0) )
        return sub_10EE0(a1);
      if ( !*((_BYTE *)a1 + 305) )
        goto LABEL_8;
    }
    else
    {
      if ( *((char *)a1 + 296) > 0 )
      {
        v6 = a1[35];
        v14 = 0;
        v15[0] = 0;
        if ( get_ea_name(&v14, v6, 1, 0) > 0 )
        {
          v6 = v14;
          v12 = (int)sub_FB40(a1, v14, 2, v8, v9);
          v13 = get_module_data((unsigned int)dword_2D4F4);
          *(_QWORD *)(v13 + 176) += v12;
        }
        if ( v14 )
        {
          *(_QWORD *)&v15[0] = 0;
          qfree(v14, v6, v7, v8);
        }
      }
      if ( !*((_BYTE *)a1 + 305) )
      {
LABEL_8:
        if ( !*((_BYTE *)a1 + 345)
          || *((_BYTE *)a1 + 297)
          || !(unsigned __int8)sub_117A0(a1)
          && (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 304LL))(a1, 2) )
        {
          *((_DWORD *)a1 + 36) |= 0x90u;
          if ( !(unsigned __int8)sub_FBC0(a1, 1) && (*((_BYTE *)a1 + 297) & 2) != 0 )
            sub_9500((__int64)a1);
        }
        return sub_10EE0(a1);
      }
    }
    if ( (unsigned __int8)sub_117A0(a1)
      || *((_WORD *)a1 + 124) == 170
      && (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) == 0
      && (unsigned __int8)sub_FE40(a1, "to ", 3)
      || !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 304LL))(a1, 1) )
    {
      return sub_10EE0(a1);
    }
    goto LABEL_8;
  }
  sub_10E20(a1, 4);
  while ( !(unsigned __int8)sub_8A90(a1, (__int64)&v14) )
  {
    v11 = get_module_data((unsigned int)dword_2D4F4);
    if ( !(unsigned __int8)sub_19BC0(v11, a1 + 28, &v14) )
      goto LABEL_3;
  }
  return sub_10EE0(a1);
}
