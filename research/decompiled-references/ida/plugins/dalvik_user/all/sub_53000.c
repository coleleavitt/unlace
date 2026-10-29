__int64 __fastcall sub_53000(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  v2 = sub_135E0(a1, a2);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = v2;
  if ( (unsigned __int8)sub_1ADC0(v2, v3) && (unsigned __int8)sub_4F9E0(v4 + 864, v6, v3) )
    *(_QWORD *)(a2 + 8) = v6[0];
  return 0;
}

