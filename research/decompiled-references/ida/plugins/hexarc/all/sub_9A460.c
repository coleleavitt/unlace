__int64 __fastcall sub_9A460(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v4[1] = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_327CE0(a2, v4) )
    sub_22AE80(v2, v4[0], 0, 0, 2);
  return 0;
}

