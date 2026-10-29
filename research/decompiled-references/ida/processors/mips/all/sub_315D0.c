__int64 __fastcall sub_315D0(__int64 a1)
{
  __int64 result; // rax
  _QWORD v2[3]; // [rsp+0h] [rbp-18h] BYREF

  v2[1] = __readfsqword(0x28u);
  result = sub_312A0(a1, v2);
  if ( (_BYTE)result )
    *(_QWORD *)(a1 + 920) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 32LL) + 16LL)
                          & (*(_QWORD *)(a1 + 920) + v2[0]);
  return result;
}

