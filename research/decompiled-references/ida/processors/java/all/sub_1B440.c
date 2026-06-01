bool __fastcall sub_1B440(__int64 a1, unsigned __int16 a2, _BYTE *a3, __int64 a4, int a5)
{
  _QWORD *outctx; // rbx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  const char *v13; // rsi
  int v14; // ebp
  bool result; // al

  outctx = (_QWORD *)create_outctx(-1, 0, 0);
  v9 = sub_1B1E0((__int64)outctx, a1, a2, a4 - 1, a5, 0);
  v13 = s1;
  v14 = v9;
  if ( outctx[4] )
    v13 = (const char *)outctx[3];
  qstrncpy(a3, v13, a4, v10, v11, v12);
  if ( outctx )
    (*(void (__fastcall **)(_QWORD *))(*outctx + 8LL))(outctx);
  result = 0;
  if ( !v14 )
    return *a3 != 0;
  return result;
}

