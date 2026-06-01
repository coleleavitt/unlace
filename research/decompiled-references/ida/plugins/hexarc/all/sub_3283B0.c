__int64 __fastcall sub_3283B0(__int64 a1)
{
  _BYTE *v2; // rdi
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  v2 = *(_BYTE **)(a1 + 24);
  if ( *v2 != 10 )
    return 0xFFFFFFFFLL;
  if ( (unsigned __int8)sub_1196C0(v2 + 80, v4, 0) )
    return (unsigned int)(v4[0] >> 3) + 1;
  result = 0xFFFFFFFFLL;
  if ( **(_BYTE **)(*(_QWORD *)(a1 + 24) + 8LL) == 1 )
    return get_tinfo_property();
  return result;
}

