__int64 __fastcall sub_C080(__int64 a1, char *a2, __int64 *a3, const void *a4, int a5)
{
  unsigned __int64 *v6; // rax
  __int64 result; // rax
  __int64 v8; // rdx
  char *v9[45]; // [rsp-170h] [rbp-2E8h] BYREF
  __int64 v10; // [rsp+0h] [rbp-178h] BYREF
  __int64 v11; // [rsp+10h] [rbp-168h]
  __int16 v12; // [rsp+18h] [rbp-160h]
  _BYTE v13[320]; // [rsp+28h] [rbp-150h] BYREF
  unsigned __int64 v14; // [rsp+168h] [rbp-10h] BYREF

  v14 = __readfsqword(0x28u);
  v6 = (unsigned __int64 *)v13;
  v12 = 0;
  v11 = -1;
  do
  {
    *((_DWORD *)v6 + 8) = 0;
    *(_WORD *)v6 = 0;
    v6 += 5;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *(v6 - 2) = 0;
  }
  while ( v6 != &v14 );
  qmemcpy(v9, a4, sizeof(v9));
  result = sub_AD00(
             a1,
             a2,
             a5,
             &v10,
             0,
             a1,
             (char)v9[0],
             (int)v9[1],
             v9[2],
             (unsigned __int16)v9[3],
             (int)v9[4],
             (__int64)v9[5],
             (__int64)v9[6],
             (__int64)v9[7],
             (int)v9[8],
             (int)v9[9],
             (__int64)v9[10]);
  if ( (_BYTE)result )
  {
    v8 = v11;
    if ( v11 != -1 && (v12 != 57 || v13[1] != 2) )
      v8 = -1;
    *a3 = v8;
  }
  return result;
}

