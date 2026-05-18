__int64 __fastcall sub_116800(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  unsigned int v5; // ebp
  unsigned int v6; // eax
  __int64 v7; // rdx
  unsigned int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // rdx
  unsigned __int32 v13; // eax
  __int64 v14; // rdi
  unsigned int v15; // [rsp+Ch] [rbp-2Ch]
  _QWORD v16[5]; // [rsp+10h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v16[1] = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 17) )
  {
    v15 = a3;
    sub_CC740(a1);
    a3 = v15;
    a2 = (unsigned int)a2;
  }
  v5 = 0;
  if ( !(_DWORD)a2 )
  {
    v10 = sub_115FA0(*(_QWORD *)(v4 + 16), a2, 0);
    v5 = v10;
    if ( !v10 )
      goto LABEL_6;
    a3 = 0;
    a2 = v10;
  }
  v6 = sub_116700(a1, a2, a3);
  if ( v6 )
    v5 = v6;
LABEL_6:
  if ( *(_BYTE *)(a1 + 16) == 2 )
  {
    v11 = sub_10F210(*(_QWORD *)v4);
    a2 = 1;
    if ( v11 )
      v5 = v11;
    if ( !(unsigned int)sub_C3B70((_QWORD *)v4, 1, v16) )
    {
      v12 = v16[0];
      v13 = _byteswap_ulong(*(_DWORD *)(*(_QWORD *)(v16[0] + 80LL) + 28LL));
      if ( !v13 )
        v13 = *(_DWORD *)(*(_QWORD *)v4 + 32LL);
      *(_DWORD *)(v4 + 64) = v13;
      sub_10F920(*(_QWORD *)(v12 + 112), 1);
    }
    v14 = *(_QWORD *)(v4 + 96);
    *(_BYTE *)(v4 + 36) = 1;
    sub_C9E70(v14, 1);
    *(_QWORD *)(v4 + 96) = 0;
  }
  sub_10F980(a1, a2);
  if ( *(_BYTE *)(a1 + 17) )
  {
    if ( (*(_DWORD *)(a1 + 20))-- == 1 )
      sub_CC7D0(a1, a2, v7);
  }
  return v5;
}
