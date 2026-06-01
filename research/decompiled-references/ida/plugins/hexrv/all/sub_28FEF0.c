__int64 __fastcall sub_28FEF0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r12
  unsigned int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // r14
  int tinfo_size; // eax
  __int64 v14; // r9
  char tinfo_property; // al
  unsigned __int64 v16; // rax
  unsigned __int8 v17; // r12
  int v18; // eax
  __int64 v19; // r9
  int v20; // ebp
  int v21; // eax
  int radix; // [rsp+8h] [rbp-60h]
  __int64 v23; // [rsp+8h] [rbp-60h]
  unsigned int v24; // [rsp+14h] [rbp-54h]
  int v25; // [rsp+18h] [rbp-50h]
  _BYTE v26[8]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 16);
  v27 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(v4 + 8 * v3 - 8);
  LOBYTE(v6) = sub_251850(a2, v5);
  if ( !(_BYTE)v6 )
  {
    if ( !under_debugger )
      sub_37DDE0(50626);
    BUG();
  }
  v7 = v6;
  v8 = *(int *)(v5 + 8);
  if ( (unsigned int)v8 <= 0x45 && (*((_BYTE *)&off_4B2D60 + 16 * v8 + 11) & 0x20) != 0 )
  {
    v10 = *(_QWORD *)(a2 + 48);
    if ( (unsigned int)get_tinfo_property() == 2 )
    {
      v11 = *(_QWORD *)(a2 + 24);
      if ( (*(_BYTE *)(v11 + 13) & 0x20) == 0
        || !(unsigned __int8)is_stroff() && (v10 = *(_QWORD *)(v11 + 40), !(unsigned __int8)is_enum()) )
      {
        if ( *(_DWORD *)(a2 + 8) != 61 )
          sub_27A0D0(v10);
        v12 = sub_250E30(*(__int64 **)(a2 + 24));
        if ( v12 >= 0 )
        {
          radix = get_radix();
          tinfo_size = get_tinfo_size();
          v24 = tinfo_size;
          v25 = tinfo_size;
          if ( (unsigned __int64)tinfo_size <= 8
            && !(unsigned __int8)sub_25C990(*(_QWORD **)(a2 + 24), *(_QWORD *)(a1 + 72), tinfo_size, radix) )
          {
            v14 = *(_QWORD *)(v5 + 24);
            if ( a2 == v14 )
              v14 = *(_QWORD *)(v5 + 32);
            v23 = v14;
            tinfo_property = get_tinfo_property();
            if ( (tinfo_property & 0xFu) <= 0xA || (tinfo_property & 0x3F) == 0x2D )
            {
              v16 = (unsigned int)(8 * v25 - 1);
              v17 = _bittest64(&v12, v16);
              if ( (unsigned __int64)(int)v16 >= 0x40 )
                v17 = 0;
              sub_327180(v26, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v24, 1);
              v18 = sub_2816C0(a1, a2, v24, v17, 0);
              v19 = v23;
              v20 = v18;
              if ( v18 )
              {
                if ( *(_DWORD *)(v23 + 8) == 48 )
                {
                  v21 = sub_28F800(a1, v23);
                  v19 = v23;
                  if ( v21 )
                    goto LABEL_24;
                }
                if ( v20 == 2 || (unsigned __int8)sub_279E20(*(_QWORD *)(a1 + 72), v19 + 48, (__int64)v26, a2 + 48, 0) )
                {
                  v7 = 0;
LABEL_24:
                  clear_tinfo_t();
                  return v7;
                }
              }
              copy_tinfo_t();
              if ( (unsigned __int8)sub_27EF00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
                *(_DWORD *)(a1 + 8) |= 8u;
              goto LABEL_24;
            }
          }
        }
      }
    }
  }
  return 0;
}

