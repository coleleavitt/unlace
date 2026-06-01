unsigned __int64 __fastcall sub_AD30(__int64 a1)
{
  __int64 v2; // rbp
  char byte; // al
  int v4; // eax
  unsigned __int8 v5; // r15
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *func; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rbx
  __int64 v15; // [rsp+8h] [rbp-450h]
  char s[1032]; // [rsp+10h] [rbp-448h] BYREF
  unsigned __int64 v17; // [rsp+418h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( (unsigned int)getinf(5) == 21 && (int)get_auto_state() > 39 )
  {
    v2 = *(_QWORD *)(a1 + 16) + *(unsigned __int16 *)(a1 + 26);
    byte = get_byte(v2);
    if ( byte < 0 )
    {
      v4 = byte & 0x7F;
      v5 = v4;
      if ( !v4 )
        v5 = get_byte(++v2);
      if ( v5 > 3u )
      {
        v6 = v5 + v2;
        if ( !(unsigned __int8)get_byte(v6 + 1) )
        {
          v15 = v2 + 1;
          if ( v5 == get_bytes(s, v5, v2 + 1, 0, 0) )
          {
            s[v5] = 0;
            if ( (unsigned __int8)is_ident(s) )
            {
              if ( v5 == strlen(s) )
              {
                if ( (v6 & 1) != 0 )
                  v5 += (unsigned __int8)get_byte(v6 + 2) == 0;
                if ( (get_flags_ex(v2, 4, v7, v8) & 0x600) == 0 )
                  create_data(v2, 0, 1, -1);
                if ( (get_flags_ex(v15, 4, v9, v10) & 0x600) == 0 )
                  create_strlit(v15, v5, 0);
                func = (_QWORD *)get_func(*(_QWORD *)(a1 + 16));
                v14 = func;
                if ( func && (get_flags_ex(*func, 4, v12, v13) & 0xC000) != 0x4000 )
                  set_name(*v14, s, 1024);
              }
            }
          }
        }
      }
    }
  }
  return v17 - __readfsqword(0x28u);
}

