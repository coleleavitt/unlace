__int64 __fastcall sub_3BC4C0(__int64 a1, __int64 a2, double a3, double a4, __m128i a5, double a6)
{
  __int64 v6; // rax
  unsigned int v7; // eax
  double v8; // xmm0_8
  unsigned int v9; // r13d
  __int64 v11; // rdx
  int v12; // r15d
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // [rsp+20h] [rbp-A0h]
  char tinfo; // [rsp+20h] [rbp-A0h]
  __int64 v18; // [rsp+28h] [rbp-98h]
  int v19; // [rsp+34h] [rbp-8Ch] BYREF
  __int64 v20; // [rsp+38h] [rbp-88h] BYREF
  __int64 v21; // [rsp+40h] [rbp-80h] BYREF
  _QWORD v22[2]; // [rsp+48h] [rbp-78h] BYREF
  __int64 tinfo_property; // [rsp+58h] [rbp-68h]
  __int128 v24; // [rsp+60h] [rbp-60h] BYREF
  __int64 v25; // [rsp+70h] [rbp-50h]
  int v26; // [rsp+78h] [rbp-48h]
  __int16 v27; // [rsp+7Ch] [rbp-44h]
  unsigned __int64 v28; // [rsp+88h] [rbp-38h]

  v28 = __readfsqword(0x28u);
  sub_38B490(a2, 0);
  v20 = 0;
  v18 = sub_38D720(a2 + 80);
  v16 = -1;
  if ( !v18 )
  {
    v16 = sub_38D3D0(a2 + 80, nullptr, &v20, nullptr, a3);
    if ( v16 == -1 )
    {
      v9 = 0;
      goto LABEL_3;
    }
  }
  v6 = *(_QWORD *)(a2 + 128);
  v19 = 0;
  v8 = ((double (__fastcall *)(__int64, int *, __int64, const char *, _QWORD, _QWORD, __int64 (*)(), _QWORD))callui)(
         205,
         &v19,
         1,
         "Select a structure",
         0,
         *(unsigned int *)(*(_QWORD *)(v6 + 880) + 40LL),
         sub_3BAE10,
         0);
  v9 = 1;
  if ( v7 )
  {
    v11 = *(_QWORD *)(a2 + 128);
    v21 = 0;
    *(_DWORD *)(*(_QWORD *)(v11 + 880) + 40LL) = v7;
    LOWORD(v25) = 1;
    *((_QWORD *)&v24 + 1) = v7;
    *(_QWORD *)&v24 = get_idati();
    create_tinfo();
    v12 = v19;
    v22[0] = 0;
    if ( v19 )
    {
      if ( v18 )
      {
        v8 = 0.0;
        v22[1] = 0;
        tinfo_property = 0;
        v24 = 0;
        copy_tinfo_t();
        v25 = 0;
        copy_tinfo_t();
        v26 = 0;
        v27 = 0;
        clear_tinfo_t();
        clear_tinfo_t();
        v26 = v12;
        HIBYTE(v27) = 0x80;
        copy_tinfo_t();
        tinfo_property = 0;
        tinfo_property = get_tinfo_property();
        copy_tinfo_t();
        clear_tinfo_t();
        tinfo = create_tinfo();
        clear_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
        if ( tinfo )
          goto LABEL_7;
      }
    }
    else
    {
      sub_32C540(&v24, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL), &v21);
      copy_tinfo_t();
      clear_tinfo_t();
      if ( v18 )
      {
LABEL_7:
        v9 = (unsigned __int8)sub_399630(a2, v18, v22, v8, a4, a5, a6);
LABEL_9:
        clear_tinfo_t();
        clear_tinfo_t();
        goto LABEL_3;
      }
      if ( v16 != -1 )
      {
        v13 = set_tinfo_property4();
        if ( sub_38B770(v13, "Setting field type") )
        {
          sub_3901D0(a2, (__int64)"Setting field type", v14, v15);
          v9 = 1;
          goto LABEL_9;
        }
      }
    }
    v9 = 0;
    goto LABEL_9;
  }
LABEL_3:
  clear_tinfo_t();
  return v9;
}

