__int64 __fastcall sub_25F00(int a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // r12
  unsigned __int8 (__fastcall **v8)(__int64, __int64, unsigned int *); // rax
  _QWORD *v9; // rbp
  unsigned __int8 (__fastcall **v10)(__int64, __int64, _QWORD *); // rax
  unsigned int v11; // [rsp+Ch] [rbp-3Ch] BYREF
  _QWORD v12[7]; // [rsp+10h] [rbp-38h] BYREF

  v12[3] = __readfsqword(0x28u);
  v2 = sub_15850();
  switch ( a1 )
  {
    case 7:
      v10 = *(unsigned __int8 (__fastcall ***)(__int64, __int64, _QWORD *))a2;
      LOWORD(v12[0]) = 0;
      if ( (*v10)(a2, 7, v12) )
        (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a2 + 16LL))(a2, 6, LOWORD(v12[0]) != 0);
      break;
    case 9:
      v7 = v2;
      v8 = *(unsigned __int8 (__fastcall ***)(__int64, __int64, unsigned int *))a2;
      v11 = -1;
      if ( (*v8)(a2, 9, &v11) )
      {
        sub_544B0(v12, v7, v11);
        v9 = sub_25DF0(v7 + 1832, (__int64)v12);
        if ( v9 == (_QWORD *)(v7 + 1840) )
        {
          if ( !v12[0] )
            return 1;
        }
        else
        {
          (*(void (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)a2 + 8LL))(a2, 3, v9 + 7);
          (*(void (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)a2 + 8LL))(a2, 4, v9 + 8);
          sub_18F50(a2);
          if ( !v12[0] )
            return 1;
        }
        v12[1] = 0;
        qfree();
      }
      break;
    case -1:
      if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                           1004,
                           a2,
                           &callui,
                           v3,
                           v4,
                           v5) )
      {
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, 3, 0);
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, 4, 0);
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, 5, 0);
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, 6, 0);
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, 7, 0);
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, 8, 0);
      }
      else
      {
        sub_18F50(a2);
      }
      break;
  }
  return 1;
}

