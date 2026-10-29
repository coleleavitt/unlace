char __fastcall sub_179570(__int64 a1, _BYTE *a2, const __m128i *a3)
{
  int v3; // r12d
  __int64 *v5; // rax
  char result; // al
  __int64 v7; // rax
  __int64 v8; // rax
  char v9; // [rsp+Fh] [rbp-69h]
  __int64 (__fastcall **v10)(); // [rsp+10h] [rbp-68h] BYREF
  __int64 v11; // [rsp+18h] [rbp-60h]
  __int64 v12; // [rsp+20h] [rbp-58h]
  _BYTE *v13; // [rsp+28h] [rbp-50h]
  __int64 v14; // [rsp+30h] [rbp-48h]
  const __m128i *v15; // [rsp+38h] [rbp-40h]
  char v16; // [rsp+40h] [rbp-38h]
  unsigned __int64 v17; // [rsp+48h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( a3 )
  {
    v3 = *(_DWORD *)(a1 + 72);
    v5 = sub_178E60((__int64)a3, (unsigned __int64)a2, v3);
    if ( v5 )
    {
      return *((_BYTE *)v5 + 12);
    }
    else
    {
      v14 = 0;
      v10 = off_4BE6F8;
      v7 = *(_QWORD *)(a1 + 64);
      v15 = a3;
      v16 = 0;
      v11 = v7;
      v12 = a1;
      v13 = a2;
      result = (unsigned int)sub_11B560(a2, &v10) == 1;
      if ( v16 )
      {
        v9 = result;
        sub_1792E0(a3, (unsigned __int64)a2, v3, result);
        return v9;
      }
    }
  }
  else
  {
    v12 = a1;
    v10 = off_4BE6F8;
    v8 = *(_QWORD *)(a1 + 64);
    v14 = 0;
    v15 = nullptr;
    v16 = 0;
    v11 = v8;
    v13 = a2;
    return (unsigned int)sub_11B560(a2, &v10) == 1;
  }
  return result;
}

