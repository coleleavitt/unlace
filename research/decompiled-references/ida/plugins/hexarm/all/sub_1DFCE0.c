__int64 __fastcall sub_1DFCE0(__int128 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned int v9; // ebx
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // [rsp+8h] [rbp-A8h] BYREF
  _QWORD v30[2]; // [rsp+10h] [rbp-A0h] BYREF
  _QWORD v31[2]; // [rsp+20h] [rbp-90h] BYREF
  _QWORD v32[2]; // [rsp+30h] [rbp-80h] BYREF
  _QWORD v33[2]; // [rsp+40h] [rbp-70h] BYREF
  _QWORD v34[2]; // [rsp+50h] [rbp-60h] BYREF
  __int64 v35; // [rsp+60h] [rbp-50h]
  __int128 v36; // [rsp+68h] [rbp-48h]
  unsigned __int64 v37; // [rsp+78h] [rbp-38h]

  v4 = *((_QWORD *)&a1 + 1);
  *((_QWORD *)&a1 + 1) = a4;
  v37 = __readfsqword(0x28u);
  v34[0] = 0;
  v34[1] = 0;
  v35 = 0;
  v36 = 0;
  if ( !a4 )
  {
    *((_QWORD *)&a1 + 1) = v34;
    sub_1238E0(a1, a3, 0, 0xFFFF0000);
    *((_QWORD *)&a1 + 1) = v34;
  }
  if ( a2 )
    v7 = *(_QWORD *)(a2 + 16);
  else
    v7 = *(_QWORD *)(a1 + 56);
  v8 = sub_128B90(a1, *((_QWORD **)&a1 + 1), v7, 0, nullptr, 0, 0x101u);
  if ( v8 )
  {
    if ( *(_DWORD *)(v8 + 68) < *(_DWORD *)(a3 + 4)
      || !sub_125010((unsigned __int8 *)(v8 + 64), *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL), a3, 1u) )
    {
      goto LABEL_7;
    }
    v11 = *(_DWORD *)v8;
    if ( *(_DWORD *)v8 == 18 )
    {
      if ( !(unsigned __int8)sub_11F7C0((char *)(v8 + 48), &v29, 1u) )
        goto LABEL_7;
      v28 = v29 & *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 24LL) + 16LL);
      if ( v28 != v29 || !v29 )
        goto LABEL_7;
      v32[0] = 1 - v29;
      v32[1] = 2 * v29 - 1;
      sub_316F70(v4, v32, 1 - v29, v28, v26, v27);
      v9 = 0;
    }
    else if ( v11 > 0x12 )
    {
      if ( v11 != 20
        || !(unsigned __int8)sub_11F7C0((char *)(v8 + 48), &v29, 0)
        && !(unsigned __int8)sub_11F7C0((char *)(v8 + 32), &v29, 0) )
      {
        goto LABEL_7;
      }
      v16 = log2ceil();
      v19 = v16;
      v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 24LL) + 16LL);
      if ( (unsigned __int64)(int)v16 > 0x3F )
      {
        v29 = 0;
      }
      else
      {
        v29 = 1LL << v16;
        v21 = v20 & (1LL << v16);
        if ( v21 != 1LL << v16 )
          goto LABEL_7;
        v19 = v21 - 1;
        v20 &= v19;
      }
      v33[1] = v20;
      v33[0] = 0;
      sub_316F70(v4, v33, v20, v19, v17, v18);
      v9 = 0;
    }
    else
    {
      if ( v11 != 4 )
      {
        if ( v11 == 17 )
        {
          if ( (unsigned __int8)sub_11F7C0((char *)(v8 + 48), &v29, 0) )
          {
            v14 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 24LL);
            v15 = v29 & *(_QWORD *)(v14 + 16);
            if ( v15 == v29 )
            {
              if ( v29 )
              {
                v31[0] = 0;
                v31[1] = v29;
                sub_316F70(v4, v31, v14, v15, v12, v13);
                v9 = 0;
                goto LABEL_8;
              }
            }
          }
        }
LABEL_7:
        v9 = -1;
        goto LABEL_8;
      }
      if ( !(unsigned __int8)sub_11F7C0((char *)(v8 + 32), &v29, 0) )
        goto LABEL_7;
      v24 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 24LL);
      v25 = v29 & *(_QWORD *)(v24 + 16);
      if ( v29 != v25 )
        goto LABEL_7;
      v30[0] = v29;
      v30[1] = 1;
      sub_316F70(v4, v30, v24, v25, v22, v23);
      v9 = 0;
    }
  }
  else
  {
    v9 = 1;
  }
LABEL_8:
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree();
  }
  qfree();
  return v9;
}

