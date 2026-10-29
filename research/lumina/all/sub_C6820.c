__int64 __fastcall sub_C6820(unsigned __int8 *a1)
{
  int v1; // eax
  __int64 v2; // rdx
  __int64 result; // rax
  int v4; // esi

  while ( 1 )
  {
    while ( (*((_DWORD *)a1 + 1) & 0x21000) != 0 )
      a1 = *((unsigned __int8 **)a1 + 2);
    v1 = *a1;
    if ( v1 == 176 )
      v1 = a1[2];
    if ( ((v1 - 167) & 0xFFFFFFFD) == 0 )
    {
      v2 = *((_QWORD *)a1 + 8);
      if ( v2 )
        break;
    }
    switch ( v1 )
    {
      case 138:
        a1 = *(unsigned __int8 **)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 32LL) + 8LL);
        break;
      case 36:
        return sub_C6620(*((unsigned __int8 **)a1 + 1), 0);
      case 178:
        a1 = *(unsigned __int8 **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL) + 32LL)
                                 + 24LL * *((__int16 *)a1 + 24)
                                 + 8);
        break;
      case 177:
        a1 = *(unsigned __int8 **)(*((_QWORD *)a1 + 4) + 8LL);
        break;
      default:
        return a1[1];
    }
  }
  v4 = *((__int16 *)a1 + 24);
  if ( v4 < 0 )
    return 68;
  result = 68;
  if ( v4 < *(__int16 *)(v2 + 54) )
    return *(unsigned __int8 *)(*(_QWORD *)(v2 + 8) + 16LL * (__int16)v4 + 9);
  return result;
}
