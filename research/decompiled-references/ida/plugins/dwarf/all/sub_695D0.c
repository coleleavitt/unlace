__int64 __fastcall sub_695D0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int tinfo; // ebx
  __int64 v6; // rdi
  unsigned int v7; // eax
  __int64 idati; // rdx
  _QWORD v9[2]; // [rsp+0h] [rbp-148h] BYREF
  __int16 v10; // [rsp+10h] [rbp-138h]
  __m128i v11[16]; // [rsp+20h] [rbp-128h] BYREF
  unsigned __int64 v12; // [rsp+128h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  sub_84A60(v11);
  if ( (unsigned __int8)sub_98E20(a3, v11) && (v6 = *(_QWORD *)(a3 + 8), (v7 = sub_52AC0(v6, v11, 0)) != 0) )
  {
    idati = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 144LL) + 8LL);
    v10 = 257;
    v9[1] = v7;
    if ( !idati )
      idati = get_idati(v6, v11[0].m128i_i8);
    v9[0] = idati;
    tinfo = create_tinfo(a2, 61, 189, v9);
  }
  else
  {
    tinfo = 0;
  }
  sub_1B750((__int64)v11);
  return tinfo;
}

