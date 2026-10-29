__int64 __fastcall sub_84EF0(__int64 *a1, int a2, unsigned __int64 a3, int a4, char a5)
{
  __int64 *v7; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r15
  __int64 v10; // r14
  unsigned __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v16; // rax
  unsigned __int64 v17; // [rsp+0h] [rbp-60h]
  __int64 v18; // [rsp+8h] [rbp-58h] BYREF
  __int128 v19; // [rsp+10h] [rbp-50h]
  unsigned __int64 v20; // [rsp+20h] [rbp-40h]

  v7 = a1;
  v20 = __readfsqword(0x28u);
  v8 = a3;
  v19 = 0;
  v18 = 0;
  if ( !a1 )
    v7 = &v18;
  if ( a4 != -1 )
  {
    v9 = a3 >> 1;
    if ( ((a3 - 6) & 0xFFFFFFFFFFFFFFFBLL) == 0 )
      v9 = 2;
    if ( !(unsigned __int8)sub_84A20(v7, a4, v9, a5) )
      goto LABEL_18;
    v10 = v7[1];
    v11 = 2;
    if ( v10 )
    {
      v11 = v10 + 1;
      v12 = *v7;
      --v10;
      if ( v7[2] >= v11 )
        goto LABEL_9;
    }
    else
    {
      v12 = *v7;
      if ( (unsigned __int64)v7[2] >= 2 )
      {
LABEL_9:
        v7[1] = v11;
        v8 -= v9;
        *(_BYTE *)(v12 + v10) = 58;
        *(_BYTE *)(*v7 + v10 + 1) = 0;
        goto LABEL_10;
      }
    }
    v17 = v11;
    v16 = qvector_reserve();
    *v7 = v16;
    v11 = v17;
    v12 = v16;
    goto LABEL_9;
  }
LABEL_10:
  if ( !(unsigned __int8)sub_84A20(v7, a2, v8, a5) )
  {
LABEL_18:
    v14 = -1;
    goto LABEL_13;
  }
  v13 = v7[1];
  v14 = 0;
  if ( v13 )
    v14 = v13 - 1;
LABEL_13:
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree();
  }
  return v14;
}
