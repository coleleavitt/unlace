__int64 __fastcall sub_2956E0(__int64 a1, _DWORD a2, int a3)
{
  int v3; // eax
  __int64 v5; // r13
  __int64 result; // rax
  int v7; // eax
  _QWORD v8[2]; // [rsp+10h] [rbp-58h] BYREF
  __int16 v9; // [rsp+20h] [rbp-48h]
  unsigned __int64 v10; // [rsp+28h] [rbp-40h]

  v3 = *(unsigned __int8 *)(a1 + 131);
  v10 = __readfsqword(0x28u);
  if ( v3 == a3 )
  {
    v8[0] = 8;
    copy_tinfo_t();
    clear_tinfo_t();
    return 1;
  }
  v5 = *(unsigned __int8 *)(a1 + 130);
  if ( (_DWORD)v5 == a3 )
  {
    v7 = *(_DWORD *)(a1 + 920);
    if ( v7 == -1 )
    {
      *(_DWORD *)(a1 + 920) = 0;
      v9 = 256;
      v8[1] = "BOOL";
      v8[0] = get_idati();
      if ( (unsigned __int8)create_tinfo() )
      {
        if ( v5 == get_tinfo_size() )
          *(_DWORD *)(a1 + 920) = 1;
      }
      else
      {
        *(_DWORD *)(a1 + 920) = 1;
        v8[0] = 7;
        copy_tinfo_t();
        clear_tinfo_t();
        save_tinfo();
      }
      clear_tinfo_t();
      v7 = *(_DWORD *)(a1 + 920);
    }
    if ( v7 )
    {
      sub_323780(v8, "BOOL");
      copy_tinfo_t();
      clear_tinfo_t();
      return 1;
    }
  }
  if ( a3 == 1 )
    goto LABEL_8;
  result = *(unsigned __int8 *)(a1 + 144);
  if ( (_BYTE)result )
  {
    result = 0;
    if ( ((a3 - 4) & 0xFFFFFFFB) != 0 )
      return result;
LABEL_8:
    v8[0] = byte_403140[a3 >> 1];
    copy_tinfo_t();
    clear_tinfo_t();
    return 1;
  }
  if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
    goto LABEL_8;
  return result;
}

