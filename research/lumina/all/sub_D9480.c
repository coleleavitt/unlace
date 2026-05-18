__int64 __fastcall sub_D9480(__int64 a1, int a2, __int64 *a3, _QWORD *a4)
{
  __int64 v8; // rcx
  __int64 *v9; // rsi
  _QWORD *v10; // rbp
  __int64 v11; // rcx
  int v12; // ebx
  __int64 *v13; // r15
  __int64 result; // rax
  __int64 v15; // [rsp+0h] [rbp-68h]
  __int64 v16; // [rsp+0h] [rbp-68h]
  unsigned int v19; // [rsp+1Ch] [rbp-4Ch]
  __int64 v20[9]; // [rsp+20h] [rbp-48h] BYREF

  v8 = *a3;
  v20[1] = __readfsqword(0x28u);
  v9 = nullptr;
  v15 = v8;
  v10 = sub_D25B0(a2, 0);
  *a4 = v10;
  v11 = v15;
  if ( !v10 )
  {
    LODWORD(result) = 7;
LABEL_6:
    v19 = result;
    v16 = v11;
    sub_D6510((__int64)v10, v9);
    v11 = v16;
    *a4 = 0;
    result = v19;
    goto LABEL_7;
  }
  if ( a2 <= 0 )
  {
    result = 0;
    goto LABEL_7;
  }
  v12 = 0;
  do
  {
    v9 = (__int64 *)(v10[3] + 80LL * v12);
    v13 = v9;
    LODWORD(result) = sub_D3690(a1, (__int64)v9, (__int64 **)(a1 + 72), v11);
    if ( (_DWORD)result
      || (v9 = v20,
          v20[0] = 0,
          LODWORD(result) = sub_D4150((__int64)v13, (unsigned __int64 *)v20),
          v13[1] = *v13 + v20[0],
          (_DWORD)result) )
    {
      v11 = v13[1];
      goto LABEL_6;
    }
    ++v12;
    result = sub_D90E0((__int64)v13, v20);
    v11 = v13[1];
  }
  while ( a2 > v12 && !(_DWORD)result );
  if ( (_DWORD)result )
    goto LABEL_6;
LABEL_7:
  *a3 = v11;
  return result;
}
