__int64 __fastcall sub_D2EC0(__int64 a1, __int64 a2, int a3)
{
  _DWORD *v4; // rbp
  __int64 v6; // rax
  __int64 v8; // rdx
  unsigned int v9; // r13d
  bool v10; // zf
  __int64 v11; // rdi
  __int64 *v12; // r14
  unsigned int v13; // eax
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // [rsp+Ch] [rbp-4Ch]
  _QWORD v18[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = (_DWORD *)a2;
  v18[1] = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 200);
  if ( *(_BYTE *)(a1 + 19) && *(_DWORD *)(a1 + 32)
    || (v8 = *(unsigned int *)(*(_QWORD *)(a1 + 288) + 24LL), (_DWORD)v8)
    || (v9 = *(_DWORD *)a2) == 0 )
  {
    *(_DWORD *)a2 = v6;
  }
  else if ( v9 != (_DWORD)v6 )
  {
    v10 = *(_BYTE *)(a1 + 21) == 0;
    v18[0] = 0;
    if ( !v10 )
    {
      v11 = *(_QWORD *)(a1 + 72);
      if ( *(_QWORD *)v11 )
      {
        a2 = (__int64)v18;
        v12 = nullptr;
        v13 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 48LL))(v11, v18);
        if ( v13 )
          goto LABEL_13;
      }
    }
    v14 = sub_D2D70(v9 + 8, a2, v8);
    v12 = v14;
    if ( !v14 )
    {
      sub_CBC10(nullptr, a2, v15);
      *v4 = *(_QWORD *)(a1 + 200);
      return 7;
    }
    *(__int64 *)((char *)v14 + v9) = 0;
    sub_CBBE0(a1);
    a2 = v9;
    v13 = sub_C3060(*(_QWORD *)(a1 + 288), v9);
    if ( v13 )
    {
LABEL_13:
      v17 = v13;
      sub_CBC10(v12, a2, v8);
      *v4 = *(_QWORD *)(a1 + 200);
      return v17;
    }
    sub_CBC10(*(_QWORD **)(a1 + 280), v9, v8);
    v16 = v18[0];
    *(_QWORD *)(a1 + 280) = v12;
    *(_QWORD *)(a1 + 200) = v9;
    *(_DWORD *)(a1 + 32) = (v9 + v16 - 1) / v9;
    *(_DWORD *)(a1 + 192) = dword_241470 / v9 + 1;
    *v4 = v9;
  }
  if ( a3 < 0 )
    LOWORD(a3) = *(_WORD *)(a1 + 178);
  *(_WORD *)(a1 + 178) = a3;
  sub_C34F0(a1);
  return 0;
}
