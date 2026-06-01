__int64 __fastcall sub_2CF90(__int64 a1, unsigned __int64 *a2, double a3)
{
  __int64 result; // rax
  char v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  __int64 i; // rbx
  __int64 v11; // rdx
  __int64 v12; // r15
  int flags; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  char v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // [rsp+8h] [rbp-1B0h] BYREF
  _QWORD v23[53]; // [rsp+10h] [rbp-1A8h] BYREF

  v23[45] = __readfsqword(0x28u);
  if ( sub_1F290(a1, a2[2]) )
    return 0;
  v4 = 0;
  v5 = sub_2CCD0(a1, a2[2]);
  result = 100;
  if ( v5 == -1 )
  {
    qmemcpy(v23, a2, 0x168u);
    if ( (int)get_auto_state() > 29 )
      v4 = has_jump_or_flow_xref(v23[2]) ^ 1;
    v9 = LOWORD(v23[3]);
    for ( i = 16; LOWORD(v23[3]) != 544; v9 = LOWORD(v23[3]) )
    {
      v11 = (unsigned int)(unsigned __int16)v9 - 30;
      if ( (unsigned int)v11 > 3 )
      {
        v18 = v4 & ((_WORD)v9 == 116);
        if ( v18 )
        {
          if ( BYTE1(v23[5]) != 1 || HIWORD(v23[5]) != 31 )
            return 0;
          result = decode_insn(v23, v23[2] + WORD1(v23[3]), v11, v6, v7, v8, a3);
          if ( !(_DWORD)result )
            return result;
          v9 = LOWORD(v23[3]);
        }
        if ( (unsigned __int16)v9 > 0x87u )
        {
          if ( (_WORD)v9 != 473 )
          {
            if ( (unsigned __int16)v9 > 0x1D9u )
            {
              if ( (_WORD)v9 != 838 )
                return 0;
            }
            else if ( (unsigned __int16)v9 <= 0xC3u )
            {
              if ( (unsigned __int16)v9 <= 0xC1u )
                return 0;
            }
            else if ( (_WORD)v9 != 204 )
            {
              return 0;
            }
          }
        }
        else if ( (unsigned __int16)v9 > 0x77u )
        {
          v21 = 63555;
          if ( !_bittest64(&v21, (unsigned int)(v9 - 120)) )
            return 0;
        }
        else
        {
          if ( (unsigned __int16)(v9 - 1) > 0x20u )
            return 0;
          v19 = 0x3C0000036LL;
          if ( !_bittest64(&v19, v9) )
            return 0;
        }
        v22 = 0;
        sub_2AAE0(a1, &v22, (__int64)v23, -1);
        if ( (v22 & 0xA0000000) != 0 )
          return 0;
        if ( v18 )
          return 100;
      }
      else
      {
        if ( BYTE1(v23[5]) == 1 && HIWORD(v23[5]) == 29 && BYTE1(v23[10]) == 5 )
        {
          v20 = v23[11];
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
            v20 = SLODWORD(v23[11]);
          if ( v20 < 0 )
            return 100;
        }
        v22 = 0;
        sub_2AAE0(a1, &v22, (__int64)v23, -1);
        if ( (v22 & 0xA0000000) != 0 )
          return 0;
      }
      v12 = v23[2] + WORD1(v23[3]);
      flags = get_flags_ex(v12, 4);
      if ( (flags & 0x1000) != 0 )
        return 0;
      v17 = flags & 0x600;
      if ( v17 == 1536 )
      {
        if ( (flags & 0x10000000) != 0 )
          return 0;
      }
      else
      {
        v17 -= 512;
        if ( (v17 & 0xFFFFFFFFFFFFFC00LL) == 0 )
          return 0;
      }
      if ( (flags & 0x4000) != 0 )
        return 0;
      if ( !(unsigned int)decode_insn(v23, v12, v17, v14, v15, v16, a3) )
        return 0;
      if ( !--i )
        return 0;
    }
    return 100;
  }
  return result;
}
