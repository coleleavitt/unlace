__int64 __fastcall sub_AB50(_QWORD *a1)
{
  __int64 v1; // r13
  __int64 module_data; // rax
  const char *v3; // rcx
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _BYTE v13[4]; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned __int16 v14; // [rsp+10h] [rbp-38h]
  unsigned __int16 v15; // [rsp+12h] [rbp-36h]
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
  {
    sub_11720(a1, ".enclosing method ", 18);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 4);
    v1 = (a1[4] == 0) + a1[4] - 1LL;
    module_data = get_module_data((unsigned int)dword_2D4F4);
    v3 = "class";
    if ( *(_WORD *)(module_data + 33099) )
      v3 = "method";
    sub_87F0((__int64)a1, (__int64)"%sEnclosing %s: ", *(const char **)(a1[79] + 48LL), v3);
    v4 = (a1[4] == 0) + a1[4] - 1LL - v1;
    v5 = get_module_data((unsigned int)dword_2D4F4);
    *(_QWORD *)(v5 + 176) += v4;
  }
  if ( *(_WORD *)(get_module_data((unsigned int)dword_2D4F4) + 33099) )
  {
    v8 = get_module_data((unsigned int)dword_2D4F4);
    v9 = get_module_data((unsigned int)dword_2D4F4);
    if ( !(unsigned __int8)sub_13D40(v8, 1, *(unsigned __int16 *)(v9 + 33099), 12, v13) )
      sub_E6A0(v8, 1);
    if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0
      || !(unsigned __int8)sub_10630(a1, v14, 5, 0) )
    {
      v10 = get_module_data((unsigned int)dword_2D4F4);
      if ( !(unsigned __int8)sub_10630(a1, *(unsigned __int16 *)(v10 + 33097), 12, 0) )
      {
        v11 = get_module_data((unsigned int)dword_2D4F4);
        if ( !(unsigned __int8)sub_FEE0(a1, (*(unsigned __int16 *)(*(_QWORD *)(v11 + 24) + 4LL) & 1u) + 46)
          && !(unsigned __int8)sub_10630(a1, v15, 13, 0) )
        {
          v12 = get_module_data((unsigned int)dword_2D4F4);
          if ( !(unsigned __int8)sub_10630(a1, v14, (*(_BYTE *)(*(_QWORD *)(v12 + 24) + 4LL) & 1) == 0 ? 6 : 3, 0) )
            goto LABEL_7;
        }
      }
    }
    return 1;
  }
  v6 = get_module_data((unsigned int)dword_2D4F4);
  if ( (unsigned __int8)sub_10630(a1, *(unsigned __int16 *)(v6 + 33097), 140, 0) )
    return 1;
LABEL_7:
  if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) == 0 )
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 4);
  *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 164) = 0;
  return sub_FBC0(a1, 0);
}

