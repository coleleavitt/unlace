__int64 __fastcall sub_3D19E0(__int64 a1, _QWORD *a2, __int64 a3, unsigned __int8 *a4, const __m128i *a5, double a6)
{
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int16 v11; // ax
  __int64 v12; // rdx
  unsigned __int8 v13; // r10
  int v14; // ecx
  __int64 v15; // rdi
  __int32 v16; // eax
  __int64 v17; // r8
  __int64 v18; // rcx
  const char *v20; // rdx
  const char *v21; // rsi
  unsigned __int8 v22; // [rsp+17h] [rbp-B1h]
  unsigned __int8 v23; // [rsp+17h] [rbp-B1h]
  __int64 v26; // [rsp+28h] [rbp-A0h]
  __int16 v27; // [rsp+3Eh] [rbp-8Ah]
  __m128i v28; // [rsp+40h] [rbp-88h] BYREF
  const char *v29; // [rsp+50h] [rbp-78h] BYREF
  __int128 v30; // [rsp+58h] [rbp-70h]
  const char *v31; // [rsp+70h] [rbp-58h]
  __int128 v32; // [rsp+78h] [rbp-50h]
  unsigned __int64 v33; // [rsp+88h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  a5[6].m128i_i32[2] = 0;
  v22 = sub_137E00((__int64)a2, (__int64)a5, 9u, a6);
  if ( v22 )
    return v22;
  v29 = nullptr;
  v30 = 0;
  if ( !a4 )
    goto LABEL_8;
  v9 = *a4;
  if ( (unsigned __int8)v9 <= 0xEu )
  {
    v10 = 16994;
    if ( _bittest64(&v10, v9) )
    {
      sub_1B2660((unsigned __int64)a4, (char *)&v29, 6u);
      if ( (unsigned __int64)v30 > 1 )
        tag_remove();
    }
  }
  if ( sub_11E8C0((unsigned int *)a3) )
    v11 = (unsigned __int8)sub_125B60((unsigned __int8 *)(a3 + 64), (__int64)a4, 1u, 0.0);
  else
LABEL_8:
    v11 = 0;
  v27 = v11;
  v28 = (__m128i)0xFFFFFFFF00000000LL;
  v26 = *(_QWORD *)(a1 + 48);
  while ( (unsigned int)sub_33CF00(
                          (__int64)"Insert an assertion\n"
                                   "%A\n"
                                   "<~V~alue       :L::16::>\n"
                                   "<#A register or stack variable, including the size suffix#~O~perand     :q::40::>\n"
                                   "<~I~nsert after:C>>\n"
                                   "\n",
                          0.0) )
  {
    if ( (unsigned __int64)v30 <= 1 )
    {
      sub_2B4E70((__int64)"Please enter the operand", "Example: mov #-1.4, r12.4");
    }
    else
    {
      v32 = 0;
      v31 = nullptr;
      if ( !(unsigned __int8)sub_3E9890(a2, &v28, (__int64)v29) )
      {
        v20 = s1;
        if ( (_QWORD)v32 )
          v20 = v31;
        v21 = s1;
        if ( (_QWORD)v30 )
          v21 = v29;
        sub_2B4E70((__int64)"%s: %s", v21, v20);
        goto LABEL_28;
      }
      if ( v28.m128i_i8[0] <= 0xEu && (v12 = 16994, (v13 = _bittest64(&v12, v28.m128i_u8[0])) != 0) )
      {
        v14 = v28.m128i_i32[1];
        if ( v28.m128i_i32[1] != -1 )
        {
          if ( v31 )
          {
            v23 = v13;
            *(_QWORD *)&v32 = 0;
            qfree((__int64)v31);
            v14 = v28.m128i_i32[1];
            v13 = v23;
          }
          v16 = 1;
          if ( v27 )
            v16 = 2;
          v22 = v13;
          a5[6].m128i_i32[2] = v16;
          v17 = a5->m128i_i64[0];
          a5[1].m128i_i32[2] = 4;
          a5[3].m128i_i64[0] = v17;
          sub_120A10(
            (__int64)&a5[3].m128i_i64[1],
            *(unsigned __int64 **)(**(_QWORD **)(a1 + 48) + 112LL),
            *(_QWORD *)(v26 + 2120),
            v14,
            v17,
            0);
          sub_11CA10(&a5[5].m128i_i8[8], v28.m128i_i8);
          a5[1].m128i_i32[3] |= 0x80u;
          sub_137840((__int64)a2, a5, 9, v18);
          sub_1B5B40(&a5[1].m128i_i32[2]);
          sub_6D0A0((__int64)"added user minsn %a(%d): %s\n", 0.0, a5->m128i_i64[0], (const char *)a5->m128i_u32[3]);
          break;
        }
        sub_2B4E70((__int64)"Please specify the operand size");
        v15 = (__int64)v31;
        if ( v31 )
        {
LABEL_17:
          *(_QWORD *)&v32 = 0;
          qfree(v15);
        }
      }
      else
      {
        sub_2B4E70((__int64)"Unacceptable operand type");
LABEL_28:
        v15 = (__int64)v31;
        if ( v31 )
          goto LABEL_17;
      }
    }
  }
  sub_11CDA0((__int64)&v28);
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree((__int64)v29);
  }
  return v22;
}

