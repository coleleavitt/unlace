__int64 __fastcall sub_28AA0(__int64 a1, _QWORD *a2, __int64 a3, _BYTE *a4)
{
  __int64 v6; // rcx
  __int64 result; // rax
  _QWORD v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v8[1] = __readfsqword(0x28u);
  if ( (unsigned int)*(unsigned __int16 *)(a3 + 24) - 30 > 3 || *(_BYTE *)(a3 + 81) == 1 && !*(_WORD *)(a3 + 86) )
    return 0;
  if ( (unsigned int)get_auto_state() != 40 )
    return 0;
  v6 = *a4 == 2 ? *(unsigned __int16 *)(a3 + 86) : *(unsigned __int16 *)(a3 + 46);
  result = sub_48730(a1, v8, *(_QWORD *)(a3 + 16), v6);
  if ( !(_BYTE)result || *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) == v8[0] || v8[0] == -1 )
    return 0;
  *a2 = v8[0];
  return result;
}
