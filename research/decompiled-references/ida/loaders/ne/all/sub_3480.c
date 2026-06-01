__int64 __fastcall sub_3480(unsigned __int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+8h] [rbp-40h] BYREF
  __int16 v12; // [rsp+1Eh] [rbp-2Ah] BYREF
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v11 = a3;
  v13[1] = __readfsqword(0x28u);
  v7 = getinf(20, a2, a3, a4, a5, a6);
  a1[6] = 0;
  v8 = (v7 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  *a1 = v8;
  if ( (word_B290 & 8) == 0 )
    goto LABEL_2;
  v12 = 0;
  v13[0] = 0;
  sub_33B0(
    (__int64)"NE File Manual Loading\n"
             "\n"
             "        Segment : %A\n"
             "        Size    : %N\n"
             "\n"
             " <Start ~a~ddress :N::18::>\n"
             " <~S~elector      :N::18::> (0 means that selector\n"
             "                                  will be chosen by IDA)\n"
             "\n"
             " <STOP LOADING ~F~ILE:C>>\n"
             "\n"
             "  Note that IDA won't warn you if segments overlap!\n"
             "  (this is a feature, not a bug ;)\n"
             "\n",
    a2,
    &v11,
    a1,
    v13,
    &v12);
  result = 0;
  if ( !v12 )
  {
    v10 = setup_selector(v13[0]);
    a1[6] = v10;
    if ( v10 )
      goto LABEL_3;
    v8 = *a1;
LABEL_2:
    a1[6] = setup_selector(v8 >> 4);
LABEL_3:
    a1[1] = *a1 + v11;
    return 1;
  }
  return result;
}

