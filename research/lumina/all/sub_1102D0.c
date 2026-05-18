__int64 __fastcall sub_1102D0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  bool v5; // zf
  __int64 v6; // rbp
  __int64 v7; // rbp
  __int64 v8; // rdi
  void (__fastcall *v9)(__int64, _QWORD, _QWORD); // rax
  int v10; // ebp
  __int64 v11; // rdi
  void (__fastcall *v12)(__int64, __int64, _QWORD); // rax
  __int64 v13; // rdi
  int v14; // eax
  unsigned __int8 v15; // al

  result = *(unsigned __int8 *)(a1 + 9);
  v3 = result;
  if ( *(_BYTE *)(a1 + 19) && (((_DWORD)a2 - 2) & 0xFFFFFFFD) != 0 || (_DWORD)a2 == (_DWORD)result )
    return result;
  v5 = *(_BYTE *)(a1 + 8) == 0;
  *(_BYTE *)(a1 + 9) = a2;
  if ( v5 )
  {
    v3 = result & 5;
    if ( (result & 5) == 1 && (a2 & 1) == 0 )
    {
      v7 = *(_QWORD *)(a1 + 80);
      if ( *(_QWORD *)v7 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*(_QWORD *)(a1 + 80));
        *(_QWORD *)v7 = 0;
      }
      if ( *(_BYTE *)(a1 + 22) > 1u )
      {
        v8 = *(_QWORD *)a1;
        v9 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 48LL);
        if ( v9 )
        {
          v9(v8, *(_QWORD *)(a1 + 224), 0);
          return *(unsigned __int8 *)(a1 + 9);
        }
        return *(unsigned __int8 *)(a1 + 9);
      }
      v10 = *(unsigned __int8 *)(a1 + 21);
      if ( *(_BYTE *)(a1 + 21) )
      {
        if ( (_BYTE)v10 == 1 && (unsigned int)sub_CC090(a1, 2) )
          return *(unsigned __int8 *)(a1 + 9);
        goto LABEL_19;
      }
      v14 = sub_10FBE0((_QWORD *)a1);
      if ( *(_BYTE *)(a1 + 21) == 1 )
      {
        v15 = *(_BYTE *)(a1 + 22);
        if ( v15 == 5 || v15 <= 1u )
        {
          a2 = 2;
          if ( (unsigned int)sub_CC090(a1, 2) )
            goto LABEL_31;
LABEL_19:
          v11 = *(_QWORD *)a1;
          a2 = *(_QWORD *)(a1 + 224);
          v12 = *(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 48LL);
          if ( !v12 )
          {
LABEL_21:
            if ( v10 == 1 )
            {
              v13 = *(_QWORD *)(a1 + 72);
              if ( *(_QWORD *)v13 )
              {
                if ( !*(_BYTE *)(a1 + 17) )
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 64LL))(v13, 1);
                if ( *(_BYTE *)(a1 + 22) != 5 )
                  *(_BYTE *)(a1 + 22) = 1;
              }
              *(_BYTE *)(a1 + 23) = *(_BYTE *)(a1 + 16);
              return *(unsigned __int8 *)(a1 + 9);
            }
            if ( v10 )
              return *(unsigned __int8 *)(a1 + 9);
LABEL_31:
            sub_CC460(a1, a2);
            return *(unsigned __int8 *)(a1 + 9);
          }
LABEL_20:
          v12(v11, a2, 0);
          goto LABEL_21;
        }
      }
      else if ( v14 )
      {
        goto LABEL_31;
      }
      v11 = *(_QWORD *)a1;
      a2 = *(_QWORD *)(a1 + 224);
      v12 = *(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 48LL);
      if ( !v12 )
        goto LABEL_31;
      goto LABEL_20;
    }
  }
  result = (unsigned __int8)a2;
  if ( (_DWORD)a2 != 2 )
    return result;
  v6 = *(_QWORD *)(a1 + 80);
  if ( *(_QWORD *)v6 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v6 + 8LL))(*(_QWORD *)(a1 + 80), a2, v3);
    *(_QWORD *)v6 = 0;
    return *(unsigned __int8 *)(a1 + 9);
  }
  return 2;
}
