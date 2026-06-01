__int64 __fastcall sub_59E30(__int64 a1, int a2, int a3)
{
  const char *v4; // r14
  unsigned int v5; // eax
  int v6; // r8d
  int v7; // r9d
  __int64 result; // rax
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rcx
  unsigned int v14; // eax
  int v15; // r8d
  int v16; // r9d

  if ( (debug & 0x400000) != 0 )
  {
    switch ( a2 )
    {
      case 1:
        v4 = "act_add";
        break;
      case 2:
        v4 = "act_mirror";
        break;
      case 3:
        v4 = "act_replace";
        break;
      case 4:
        v4 = "act_skip";
        break;
      case 5:
        v4 = "act_drop";
        break;
      default:
        v4 = "???";
        break;
    }
    v5 = (unsigned int)sub_575D0((_DWORD *)a1);
    result = sub_88B80((unsigned int)"%s::set_action(act=%s, ord=%u)\n", v5, (_DWORD)v4, a3, v6, v7);
  }
  *(_DWORD *)(a1 + 336) = a2;
  switch ( a2 )
  {
    case 1:
      *(_DWORD *)(a1 + 276) = alloc_type_ordinals(
                                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 144LL) + 8LL),
                                1);
      result = (unsigned int)debug;
      if ( (debug & 0x400000) != 0 )
      {
        v9 = (unsigned int)sub_575D0((_DWORD *)a1);
        return sub_88B80((unsigned int)"Allocated ordinal #%u for %s\n", *(_DWORD *)(a1 + 276), v9, v10, v11, v12);
      }
      break;
    case 2:
      *(_DWORD *)(a1 + 280) = a3;
      sub_59D00(a1);
      if ( (debug & 0x400000) != 0 )
      {
        v14 = (unsigned int)sub_575D0((_DWORD *)a1);
        sub_88B80(
          (unsigned int)"Setting type alias #%u -> #%u (%s)\n",
          *(_DWORD *)(a1 + 276),
          *(_DWORD *)(a1 + 280),
          v14,
          v15,
          v16);
      }
      return set_type_alias(
               *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 144LL) + 8LL),
               *(unsigned int *)(a1 + 276),
               *(unsigned int *)(a1 + 280),
               v13);
    case 3:
      *(_DWORD *)(a1 + 276) = a3;
      break;
  }
  return result;
}
