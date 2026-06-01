__int64 __fastcall sub_3CB960(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4, const __m128i *a5)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int16 v10; // ax
  __int64 v11; // rdx
  unsigned __int8 v12; // r10
  int v13; // ecx
  int v14; // eax
  __int64 v15; // r8
  const char *v17; // rdx
  const char *v18; // rsi
  unsigned __int8 v19; // [rsp+17h] [rbp-B1h]
  unsigned __int8 v20; // [rsp+17h] [rbp-B1h]
  __int64 v22; // [rsp+28h] [rbp-A0h]
  __int16 v23; // [rsp+3Eh] [rbp-8Ah]
  _QWORD v24[2]; // [rsp+40h] [rbp-88h] BYREF
  const char *v25; // [rsp+50h] [rbp-78h] BYREF
  __int128 v26; // [rsp+58h] [rbp-70h]
  const char *v27; // [rsp+70h] [rbp-58h] BYREF
  __int128 v28; // [rsp+78h] [rbp-50h]
  unsigned __int64 v29; // [rsp+88h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  a5[6].m128i_i32[2] = 0;
  v19 = sub_133240(a2, (__int64)a5, 9u);
  if ( v19 )
    return v19;
  v25 = nullptr;
  v26 = 0;
  if ( !a4 )
    goto LABEL_8;
  v8 = *a4;
  if ( (unsigned __int8)v8 <= 0xEu )
  {
    v9 = 16994;
    if ( _bittest64(&v9, v8) )
    {
      sub_1AD960((unsigned __int64)a4, (char *)&v25, 6u);
      if ( (unsigned __int64)v26 > 1 )
        tag_remove();
    }
  }
  if ( sub_119D00((unsigned int *)a3) )
    v10 = (unsigned __int8)sub_120FA0((unsigned __int8 *)(a3 + 64), (__int64)a4, 1u);
  else
LABEL_8:
    v10 = 0;
  v23 = v10;
  v24[0] = 0xFFFFFFFF00000000LL;
  v24[1] = 0;
  v22 = *(_QWORD *)(a1 + 48);
  while ( (unsigned int)sub_336E80(
                          (__int64)"Insert an assertion\n"
                                   "%A\n"
                                   "<~V~alue       :L::16::>\n"
                                   "<#A register or stack variable, including the size suffix#~O~perand     :q::40::>\n"
                                   "<~I~nsert after:C>>\n"
                                   "\n",
                          0.0) )
  {
    if ( (unsigned __int64)v26 <= 1 )
    {
      sub_2AFAB0((__int64)"Please enter the operand", "Example: mov #-1.4, r12.4");
    }
    else
    {
      v28 = 0;
      v27 = nullptr;
      if ( !(unsigned __int8)sub_3E3810(a2, v24, v25, &v27) )
      {
        v17 = s1;
        if ( (_QWORD)v28 )
          v17 = v27;
        v18 = s1;
        if ( (_QWORD)v26 )
          v18 = v25;
        sub_2AFAB0((__int64)"%s: %s", v18, v17);
        goto LABEL_28;
      }
      if ( LOBYTE(v24[0]) <= 0xEu && (v11 = 16994, (v12 = _bittest64(&v11, LOBYTE(v24[0]))) != 0) )
      {
        v13 = HIDWORD(v24[0]);
        if ( HIDWORD(v24[0]) != -1 )
        {
          if ( v27 )
          {
            v20 = v12;
            *(_QWORD *)&v28 = 0;
            qfree();
            v13 = HIDWORD(v24[0]);
            v12 = v20;
          }
          v14 = 1;
          if ( v23 )
            v14 = 2;
          v19 = v12;
          a5[6].m128i_i32[2] = v14;
          v15 = a5->m128i_i64[0];
          a5[1].m128i_i32[2] = 4;
          a5[3].m128i_i64[0] = v15;
          sub_11BE50(
            (__int64)&a5[3].m128i_i64[1],
            *(_QWORD *)(**(_QWORD **)(a1 + 48) + 112LL),
            *(_QWORD *)(v22 + 2120),
            v13,
            v15,
            0);
          sub_117E50(&a5[5].m128i_i8[8], (char *)v24);
          a5[1].m128i_i32[3] |= 0x80u;
          sub_132C80(a2, a5, 9u);
          sub_1B0E40(&a5[1].m128i_i32[2]);
          sub_68620((__int64)"added user minsn %a(%d): %s\n", 0.0, a5->m128i_i64[0], (const char *)a5->m128i_u32[3]);
          break;
        }
        sub_2AFAB0((__int64)"Please specify the operand size");
        if ( v27 )
        {
LABEL_17:
          *(_QWORD *)&v28 = 0;
          qfree();
        }
      }
      else
      {
        sub_2AFAB0((__int64)"Unacceptable operand type");
LABEL_28:
        if ( v27 )
          goto LABEL_17;
      }
    }
  }
  sub_1181E0((__int64)v24);
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  return v19;
}

